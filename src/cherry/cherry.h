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

#ifndef CHERRY_CHERRY_H
#define CHERRY_CHERRY_H

namespace cherry {

    class CherryLoader;

    class CherryApplication;

    class Cherry {

        private:
            CherryLoader* cherry_loader;

        public:
            Cherry();

            ~Cherry();

            CherryApplication* loadScript(std::string* file_name_ptr);

            CherryLoader* getCherryLoader();

    };

}

#endif //CHERRY_CHERRY_H
