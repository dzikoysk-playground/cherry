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

#ifndef CHERRY_CHERRY_APPLICATION_H
#define CHERRY_CHERRY_APPLICATION_H

#include <vector>
#include "../cherry-core/work/executable.h"
#include "../cherry-core/application.h"

namespace cherry {

    class CherryApplication : public Application {

        private:
            std::vector<Executable*> executables;

        public:
            CherryApplication(Executable* executable_ptr);

            ~CherryApplication();

            virtual int launch() override;

            void addExecutable(Executable* executable_ptr);

            std::vector<Executable*>* getExecutables();

    };

}

#endif //CHERRY_CHERRY_APPLICATION_H
