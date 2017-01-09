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

#ifndef CHERRY_METHOD_H
#define CHERRY_METHOD_H

#include <string>
#include "../../cherry-core/work/executable.h"

namespace cherry {

    class Method : public Executable {

        private:
            std::string method_name;

        public:
            void execute();

    };

}

#endif //CHERRY_METHOD_H
