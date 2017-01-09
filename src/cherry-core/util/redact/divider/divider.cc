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
#include "divider.h"

cherry::Divider::Divider(std::wstring* source_ptr) : source(source_ptr) {
    caret = 0;
    line = 0;
}

cherry::Fragment* cherry::Divider::getNext() {
    std::wstring fragment_source = L"";

    for (; caret < source->size(); caret++) {
        const wchar_t character = source->at(caret);
        fragment_source += character;

        if (character == '{' || character == ';' || character == '}') {
            caret++;
            break;
        }
        else if (character == '\n') {
            line++;
        }
    }

    Fragment* fragment = new Fragment();
    fragment->setFragment(&fragment_source);
    fragment->setLine(line);
    fragment->setCaretPosition(caret);

    return fragment;
}

bool cherry::Divider::hasNext() {
    return caret < source->length();
}




