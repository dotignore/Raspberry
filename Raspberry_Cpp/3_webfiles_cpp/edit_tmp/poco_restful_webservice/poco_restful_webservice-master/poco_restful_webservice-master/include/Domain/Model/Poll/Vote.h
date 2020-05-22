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

#ifndef Web_Service_Domain_Model_Poll_Vote_INCLUDED
#define Web_Service_Domain_Model_Poll_Vote_INCLUDED

#include "Poco/DateTime.h"

namespace Domain {
namespace Model {
namespace Poll {


    class Vote
    {
    public:
        /// User-defined Default Constructor
        Vote();

        /*!
         * @param optionIdentity    Identity of the Option chosen in the vote.
         * @param createdAt         Date and time the vote was made.
         */
        explicit Vote(const std::string & optionIdentity, Poco::DateTime = Poco::DateTime());

        Poco::DateTime createdAt() const;
        std::string optionIdentity() const;

    private:
        std::string _optionIdentity;
        const Poco::DateTime _createdAt;

    };


} } }

#endif
