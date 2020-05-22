/*
 * (C) Copyright 2018 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef Web_Service_Interface_Handling_JSONAPI_Abstract_Root_Resource_Builder_INCLUDED
#define Web_Service_Interface_Handling_JSONAPI_Abstract_Root_Resource_Builder_INCLUDED

#include "Interface/Handling/JSONAPI/JsonAPIAbstractResourceBuilder.h"
#include "Interface/Handling/JSONAPI/JsonAPIAbstractRelatedResourceBuilder.h"

namespace Interface {
namespace Handling {


    class IRelatedResourceBuilder;
    class IJsonAPIResourceBuilder;
    class JsonAPIAbstractRootResourceBuilder : public JsonAPIAbstractResourceBuilder
    {
    public:
        // Default Destructor
        ~JsonAPIAbstractRootResourceBuilder() override = default;

        void addRelatedResource(IRelatedResourceBuilder *);
        void addIncludeResource(IJsonAPIResourceBuilder *);

        Poco::DynamicStruct & build() final;

    protected:
        explicit JsonAPIAbstractRootResourceBuilder(const std::string &);

    private:
        Poco::Dynamic::Array includes;
        Poco::DynamicStruct relationships;

    };


} }

#endif
