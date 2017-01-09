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

#ifndef CHERRY_CHERRY_PARSER_H
#define CHERRY_CHERRY_PARSER_H

#include <string>
#include "elements/wrapper.h"
#include "../cherry-core/interpreter/parser/parser.h"
#include "../cherry-core/util/redact/formatter/formatter.h"
#include "../cherry-core/util/redact/divider/divider.h"

namespace cherry {

    class CherryParser : public Parser {

        private:
            std::wstring* source;
            Wrapper* wrapper;
            Divider* divider;
            Formatter* formatter;

        public:
            CherryParser(std::wstring* source_ptr);

            ~CherryParser();

            virtual Wrapper* parse() override;

            Executable* parseFragment(Fragment* fragment_ptr);

            Formatter* getFormatter() {
                return formatter;
            }

            Divider* getDivider() {
                return divider;
            }

            Wrapper* getWrapper() {
                return wrapper;
            }

            std::wstring* getSource() {
                return source;
            }

    };

}

#endif //CHERRY_CHERRY_PARSER_H
