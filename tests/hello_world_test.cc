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
#include "../src/cherry/cherry.h"
#include "../src/cherry/cherry_loader.h"
#include "../src/cherry/cherry_application.h"

int main(int argc, char* args[]) {
    cherry::Cherry cherry = cherry::Cherry();
    cherry::CherryLoader cherry_loader = *cherry.getCherryLoader();

    std::string fileName("hello_world.cherry");
    cherry::CherryApplication cherry_application = *cherry_loader.loadApplication(&fileName);

    cherry_application.launch();

    std::cout << "End of App" << std::endl;
}

