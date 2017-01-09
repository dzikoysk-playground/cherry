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

#include <iostream>
#include "cherry_parser.h"

cherry::CherryParser::CherryParser(std::wstring* source_ptr) : source(source_ptr) {
    wrapper = new cherry::Wrapper();
    divider = new cherry::Divider(source_ptr);
    formatter = new cherry::Formatter();
}

cherry::CherryParser::~CherryParser() {
    delete divider;
    delete formatter;
}

cherry::Wrapper* cherry::CherryParser::parse() {
    while (divider->hasNext()) {
        cherry::Fragment fragment = *divider->getNext();

        formatter->format(&fragment);
        Executable* executable = parseFragment(&fragment);

        if (executable == nullptr) {
            std::cout << "[CherryParser] Error: nullptr executable at " << divider->getLine() << ":" << divider->getCaretPosition() << std::endl;
            continue;
        }

        wrapper->addExecutable(executable);
    }

    return wrapper;
}

cherry::Executable* cherry::CherryParser::parseFragment(cherry::Fragment* fragment_ptr) {
    return nullptr;
}





