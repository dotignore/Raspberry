
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Reaspberry Pi 3b+ (Debian Description) 

This instructions work rof 2019-09-26-raspbian-buster-full.img
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    ██▀███   ██▓███   ██▓     ██████  ▒█████    █████▒▄▄▄█████▓ █     █░ ▄▄▄       ██▀███  ▓█████ 
   ▓██ ▒ ██▒▓██░  ██▒▓██▒   ▒██    ▒ ▒██▒  ██▒▓██   ▒ ▓  ██▒ ▓▒▓█░ █ ░█░▒████▄    ▓██ ▒ ██▒▓█   ▀ 
   ▓██ ░▄█ ▒▓██░ ██▓▒▒██▒   ░ ▓██▄   ▒██░  ██▒▒████ ░ ▒ ▓██░ ▒░▒█░ █ ░█ ▒██  ▀█▄  ▓██ ░▄█ ▒▒███   
   ▒██▀▀█▄  ▒██▄█▓▒ ▒░██░     ▒   ██▒▒██   ██░░▓█▒  ░ ░ ▓██▓ ░ ░█░ █ ░█ ░██▄▄▄▄██ ▒██▀▀█▄  ▒▓█  ▄ 
   ░██▓ ▒██▒▒██▒ ░  ░░██░   ▒██████▒▒░ ████▓▒░░▒█░      ▒██▒ ░ ░░██▒██▓  ▓█   ▓██▒░██▓ ▒██▒░▒████▒
   ░ ▒▓ ░▒▓░▒▓▒░ ░  ░░▓     ▒ ▒▓▒ ▒ ░░ ▒░▒░▒░  ▒ ░      ▒ ░░   ░ ▓░▒ ▒   ▒▒   ▓▒█░░ ▒▓ ░▒▓░░░ ▒░ ░
     ░▒ ░ ▒░░▒ ░      ▒ ░   ░ ░▒  ░ ░  ░ ▒ ▒░  ░          ░      ▒ ░ ░    ▒   ▒▒ ░  ░▒ ░ ▒░ ░ ░  ░
     ░░   ░ ░░        ▒ ░   ░  ░  ░  ░ ░ ░ ▒   ░ ░      ░        ░   ░    ░   ▒     ░░   ░    ░   
      ░               ░           ░      ░ ░                       ░          ░  ░   ░        ░  ░
                                                                                                                                                             
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

# Update & Upgrade 
$ sudo apt-get update
$ sudo apt-get upgrade -y


$ sudo apt-get install gedit -y
$ gedit --version


$ sudo apt-get install mc -y
$ mc --version


$ sudo apt-get install cmake -y
$ cmake --version


# This need for test url
$ sudo apt-get install curl
$ curl --version


// This block do not need install
// $ sudo apt-get install g++
// $ g++ --version 
// $ sudo apt-get install gcc
// $ gcc --version


$ sudo apt-get install clang-6.0 -y
$ clang --version
 
// This block do not need install
// $ sudo apt-get install gdb
// $ gdb --version


# Install dependences
$ sudo apt-get install openssl libssl-dev
$ sudo apt-get install libiodbc2 libiodbc2-dev

// This block do not need install
// $ sudo apt-get install libmysqlclient-dev // need install sql

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    █     █░ ██▓ ██▀███   ██▓ ███▄    █   ▄████  ██▓███   ██▓
   ▓█░ █ ░█░▓██▒▓██ ▒ ██▒▓██▒ ██ ▀█   █  ██▒ ▀█▒▓██░  ██▒▓██▒
   ▒█░ █ ░█ ▒██▒▓██ ░▄█ ▒▒██▒▓██  ▀█ ██▒▒██░▄▄▄░▓██░ ██▓▒▒██▒
   ░█░ █ ░█ ░██░▒██▀▀█▄  ░██░▓██▒  ▐▌██▒░▓█  ██▓▒██▄█▓▒ ▒░██░
   ░░██▒██▓ ░██░░██▓ ▒██▒░██░▒██░   ▓██░░▒▓███▀▒▒██▒ ░  ░░██░
   ░ ▓░▒ ▒  ░▓  ░ ▒▓ ░▒▓░░▓  ░ ▒░   ▒ ▒  ░▒   ▒ ▒▓▒░ ░  ░░▓  
     ▒ ░ ░   ▒ ░  ░▒ ░ ▒░ ▒ ░░ ░░   ░ ▒░  ░   ░ ░▒ ░      ▒ ░
     ░   ░   ▒ ░  ░░   ░  ▒ ░   ░   ░ ░ ░ ░   ░ ░░        ▒ ░
       ░     ░     ░      ░           ░       ░           ░  
                                                             
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


# http://wiringpi.com/download-and-install/
$ sudo apt-get install wiringpi
$ gpio -v


=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

     █████  ▄▄▄█████▓    ▄████▄   ██▀███  ▓█████  ▄▄▄      ▄▄▄█████▓ ▒█████   ██▀███  
   ▒██▓  ██▒▓  ██▒ ▓▒   ▒██▀ ▀█  ▓██ ▒ ██▒▓█   ▀ ▒████▄    ▓  ██▒ ▓▒▒██▒  ██▒▓██ ▒ ██▒
   ▒██▒  ██░▒ ▓██░ ▒░   ▒▓█    ▄ ▓██ ░▄█ ▒▒███   ▒██  ▀█▄  ▒ ▓██░ ▒░▒██░  ██▒▓██ ░▄█ ▒
   ░██  █▀ ░░ ▓██▓ ░    ▒▓▓▄ ▄██▒▒██▀▀█▄  ▒▓█  ▄ ░██▄▄▄▄██ ░ ▓██▓ ░ ▒██   ██░▒██▀▀█▄  
   ░▒███▒█▄   ▒██▒ ░    ▒ ▓███▀ ░░██▓ ▒██▒░▒████▒ ▓█   ▓██▒  ▒██▒ ░ ░ ████▓▒░░██▓ ▒██▒
   ░░ ▒▒░ ▒   ▒ ░░      ░ ░▒ ▒  ░░ ▒▓ ░▒▓░░░ ▒░ ░ ▒▒   ▓▒█░  ▒ ░░   ░ ▒░▒░▒░ ░ ▒▓ ░▒▓░
    ░ ▒░  ░     ░         ░  ▒     ░▒ ░ ▒░ ░ ░  ░  ▒   ▒▒ ░    ░      ░ ▒ ▒░   ░▒ ░ ▒░
      ░   ░   ░         ░          ░░   ░    ░     ░   ▒     ░      ░ ░ ░ ▒    ░░   ░ 
       ░                ░ ░         ░        ░  ░      ░  ░             ░ ░     ░     
                        ░                                                             
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
https://raspberrypi.stackexchange.com/questions/69345/installing-qt-on-raspberry-pi-3
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

$ sudo apt-get install qt5-default -y
$ sudo apt-get install qtcreator -y

// This block do not need install
// $ sudo apt-get install qt4-dev-tools

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    ██▓███   ▒█████   ▄████▄   ▒█████      ▄████▄   ██▓███   ██▓███  
   ▓██░  ██▒▒██▒  ██▒▒██▀ ▀█  ▒██▒  ██▒   ▒██▀ ▀█  ▓██░  ██▒▓██░  ██▒
   ▓██░ ██▓▒▒██░  ██▒▒▓█    ▄ ▒██░  ██▒   ▒▓█    ▄ ▓██░ ██▓▒▓██░ ██▓▒
   ▒██▄█▓▒ ▒▒██   ██░▒▓▓▄ ▄██▒▒██   ██░   ▒▓▓▄ ▄██▒▒██▄█▓▒ ▒▒██▄█▓▒ ▒
   ▒██▒ ░  ░░ ████▓▒░▒ ▓███▀ ░░ ████▓▒░   ▒ ▓███▀ ░▒██▒ ░  ░▒██▒ ░  ░
   ▒▓▒░ ░  ░░ ▒░▒░▒░ ░ ░▒ ▒  ░░ ▒░▒░▒░    ░ ░▒ ▒  ░▒▓▒░ ░  ░▒▓▒░ ░  ░
   ░▒ ░       ░ ▒ ▒░   ░  ▒     ░ ▒ ▒░      ░  ▒   ░▒ ░     ░▒ ░     
   ░░       ░ ░ ░ ▒  ░        ░ ░ ░ ▒     ░        ░░       ░░       
                ░ ░  ░ ░          ░ ░     ░ ░                        
                     ░                    ░                          
# https://pocoproject.org/

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
http://osdevlab.blogspot.com/2016/02/how-to-install-websocket-poco-c-library.html
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


$ cd ~
$ mkdir PocoFiles
$ cd PocoFiles

# !!! MUST FIRTS INSTALL 1.7.7 
$ wget https://pocoproject.org/releases/poco-1.7.7/poco-1.7.7.tar.gz
$ gunzip poco-1.7.7.tar.gz
$ tar -xf poco-1.7.7.tar
$ cd poco-1.7.7
$ ./configure --no-tests --no-samples
$ make -j4		// Time compilation 30 min Raspbetty pi 3b+
$ sudo make install

// # if you need install 1.9.2 version -> before need install 1.7.7
// $ cd ~/PocoFiles

$ wget https://pocoproject.org/releases/poco-1.9.2/poco-1.9.2.tar.gz
$ gunzip poco-1.9.2.tar.gz
$ tar -xf poco-1.9.2.tar
$ cd poco-1.9.2
$ ./configure --no-tests --no-samples
$ make -j4	// Time compilation 30 min Raspbetty pi 3b+
$ sudo make install






// This block do not need install
// # if you need install 1.10.1 version -> before need install 1.7.7
// # Time compilation 40 min Raspbetty pi 3b+

$ wget https://pocoproject.org/releases/poco-1.10.1/poco-1.10.1.tar.gz
$ gunzip poco-1.10.1.tar.gz
$ tar -xf poco-1.10.1.tar
$ cd poco-1.10.1
$ ./configure --no-tests --no-samples
$ make -j4	// Time compilation 35 min Raspbetty pi 3b+
$ sudo make install











----------
# test lib list
$ cd /usr/local/lib
$ ls

$ cd ~
$ mkdir test_poco_web_server
$ cd test_poco_web_server

// $ sudo apt-get install gedit
$ gedit main.cpp

$ gedit CMakeLists.txt

$ mkdir build
$ cd build
$ cmake ..
$ make
$ ./test_poco_web_server
---------

http://localhost:9980/

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

cd ~/PoCoWebSocketTest/build/
./PoCoWebSocketTest

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

curl localhost:9980/ping -v

*   Trying 127.0.0.1...
* Connected to localhost (127.0.0.1) port 5849 (#0)
> GET /ping HTTP/1.1
> Host: localhost:5849
> User-Agent: curl/7.47.0
> Accept: */*
> 
< HTTP/1.1 200 OK
< Date: Sun, 18 Sep 2016 14:08:12 GMT
< Connection: Close
< 
* Closing connection 0


ver poco





=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    ▄████▄   ▒█████   ███▄ ▄███▓ ███▄ ▄███▓▓█████  ███▄    █ ▄▄▄█████▓  ██████ 
   ▒██▀ ▀█  ▒██▒  ██▒▓██▒▀█▀ ██▒▓██▒▀█▀ ██▒▓█   ▀  ██ ▀█   █ ▓  ██▒ ▓▒▒██    ▒ 
   ▒▓█    ▄ ▒██░  ██▒▓██    ▓██░▓██    ▓██░▒███   ▓██  ▀█ ██▒▒ ▓██░ ▒░░ ▓██▄   
   ▒▓▓▄ ▄██▒▒██   ██░▒██    ▒██ ▒██    ▒██ ▒▓█  ▄ ▓██▒  ▐▌██▒░ ▓██▓ ░   ▒   ██▒
   ▒ ▓███▀ ░░ ████▓▒░▒██▒   ░██▒▒██▒   ░██▒░▒████▒▒██░   ▓██░  ▒██▒ ░ ▒██████▒▒
   ░ ░▒ ▒  ░░ ▒░▒░▒░ ░ ▒░   ░  ░░ ▒░   ░  ░░░ ▒░ ░░ ▒░   ▒ ▒   ▒ ░░   ▒ ▒▓▒ ▒ ░
     ░  ▒     ░ ▒ ▒░ ░  ░      ░░  ░      ░ ░ ░  ░░ ░░   ░ ▒░    ░    ░ ░▒  ░ ░
   ░        ░ ░ ░ ▒  ░      ░   ░      ░      ░      ░   ░ ░   ░      ░  ░  ░  
   ░ ░          ░ ░         ░          ░      ░  ░         ░                ░  
   ░                                                                           

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

//$ sudo apt-get update --fix-missing
//$ sudo apt-get upgrade   



























