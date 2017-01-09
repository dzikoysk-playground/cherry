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

#ifndef CHERRY_FRAGMENT_H
#define CHERRY_FRAGMENT_H

#include <string>

namespace cherry {

    class Fragment {

        private:
            std::wstring* fragment;
            unsigned long long int line;
            unsigned long long int caret;

        public:
            Fragment();

            Fragment(std::wstring* fragment_ptr);

            ~Fragment();

            void setFragment(std::wstring* fragment_ptr) {
                this->fragment = fragment_ptr;
            }

            void setLine(unsigned long long int line) {
                this->line = line;
            }

            void setCaretPosition(unsigned long long int caret) {
                this->caret = caret;
            }

            unsigned long long int getLine() {
                return line;
            }

            unsigned long long int getCaretPosition() {
                return caret;
            }

            std::wstring* getFragment() {
                return fragment;
            }

    };

}

#endif //CHERRY_FRAGMENT_H
