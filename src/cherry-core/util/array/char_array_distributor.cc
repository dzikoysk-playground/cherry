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

#include "char_array_distributor.h"

using cherry::CharArrayDistributor;

CharArrayDistributor::CharArrayDistributor(std::wstring* string_ptr) {
    this->length = string_ptr->size();
    this->array = string_ptr->c_str();
}

CharArrayDistributor::~CharArrayDistributor() {
    delete array;
}

wchar_t CharArrayDistributor::previous() {
    if (index - 1 < length) {
        index--;

        if (index < 0) {
            index = 0;
        }

        return array[index];
    }
    else {
        return getLast();
    }
}

wchar_t CharArrayDistributor::current() {
    return array[index];
}

wchar_t CharArrayDistributor::next() {
    if (index + 1 < length) {
        index++;
        return array[index];
    }
    else {
        return getLast();
    }
}

wchar_t CharArrayDistributor::further() {
    if (index + 1 < length) {
        return array[index + 1];
    }
    else {
        return getLast();
    }
}

wchar_t CharArrayDistributor::future() {
    if (index + 2 < length) {
        return array[index + 2];
    }
    else {
        return getLast();
    }
}

bool CharArrayDistributor::hasNext() {
    return index < length - 1;
}

wchar_t CharArrayDistributor::getPrevious() {
    return index - 1 > 0 ? array[index - 1] : array[0];
}

wchar_t CharArrayDistributor::getPrevious(int t) {
    return index - t > 0 ? array[index - t] : array[0];
}

wchar_t CharArrayDistributor::getLast() {
    return array[length - 1];
}

