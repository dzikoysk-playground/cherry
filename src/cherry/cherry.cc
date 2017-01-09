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

#include <string>
#include "cherry.h"
#include "cherry_loader.h"
#include "cherry_application.h"

using cherry::Cherry;

Cherry::Cherry() {
    cherry_loader = new CherryLoader(this);
}

Cherry::~Cherry() {
    delete cherry_loader;
}

cherry::CherryApplication* Cherry::loadScript(std::string* file_name_ptr) {
    return cherry_loader->loadApplication(file_name_ptr);
}

cherry::CherryLoader* Cherry::getCherryLoader() {
    return cherry_loader;
}
