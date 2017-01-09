/*
 * Copyright (c) 2016-2017 Dzikoysk
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
 */

#ifndef CHERRY_PANDA_LOADER_H
#define CHERRY_PANDA_LOADER_H

#include <string>

namespace cherry {

    class Cherry;

    class CherryApplication;

    class CherryLoader {

        private:
            Cherry* cherry;

        public:
            CherryLoader(Cherry* cherry_ptr);

            CherryApplication* loadApplication(std::string* file_name_ptr);

    };

}

#endif //CHERRY_PANDA_LOADER_H
