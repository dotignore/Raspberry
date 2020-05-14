#include "Poco/Net/HTTPServer.h"
#include "Poco/Net/HTTPRequestHandler.h"
#include "Poco/Net/HTTPRequestHandlerFactory.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/ServerSocket.h"
#include "Poco/Util/ServerApplication.h"
#include <iostream>

using namespace Poco;
using namespace Poco::Net;
using namespace Poco::Util;

class HelloRequestHandler: public HTTPRequestHandler                                                                    // HTTPRequestHandler.h
{
    void handleRequest(HTTPServerRequest& request, HTTPServerResponse& response)
    {
        Application& app = Application::instance();
        app.logger().information("Request from %s", request.clientAddress().toString());

        response.setChunkedTransferEncoding(true);
        response.setContentType("text/html");

        response.send()
                << "<html>"
                << "<head><title>Hello</title></head>"
                << "<body><h1>Hello from the POCO Web Server</h1></body>"
                << "</html>";
    }
};


class HelloRequestHandlerFactory: public HTTPRequestHandlerFactory                                                      // HTTPRequestHandlerFactory.h
{
    HTTPRequestHandler* createRequestHandler(const HTTPServerRequest&)                                                  // HTTPRequestHandler.h   HTTPServerRequest.h
    {
        return new HelloRequestHandler;                                                                                 // class HelloRequestHandler
    }
};





class WebServerApp: public ServerApplication
{
    void initialize(Application& self)
    {
        loadConfiguration();
        ServerApplication::initialize(self);
    }

    // vector - Вектор в C++ — это замена стандартному динамическому массиву, память для которого выделяется вручную, с помощью оператора new.
    // Разработчики языка рекомендуют в использовать именно vector вместо ручного выделения памяти для массива. Это позволяет избежать утечек памяти и облегчает работу программисту.
    int main(const std::vector<std::string>&)
    {
        UInt16 port = static_cast<UInt16>(config().getUInt("port", 80));

        HTTPServer srv(new HelloRequestHandlerFactory, port);                                                   // HTTPServer.h    class HelloRequestHandlerFactory
        srv.start();
        logger().information("HTTP Server started on port %hu.", port);
        waitForTerminationRequest();
        logger().information("Stopping HTTP Server...");
        srv.stop();

        return Application::EXIT_OK;
    }
};

POCO_SERVER_MAIN(WebServerApp)