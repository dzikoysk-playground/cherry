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
#include <thread>
#include <iostream>
#include "cherry/cherry.h"
#include "cherry/cherry_loader.h"
#include "cherry/cherry_application.h"

int application_threads = 0;

void launch(cherry::CherryApplication* cherry_application) {
    std::cout << "Starting..." << std::endl;

    cherry_application->launch();

    std::cout << "App finished with exit code 0" << std::endl;

    application_threads--;
    delete cherry_application;
}

int main(int count, char* arguments[]) {
    if (count < 2) {
        return 0;
    }

    cherry::Cherry cherry;
    cherry::CherryLoader cherry_loader = *cherry.getCherryLoader();

    for (int i = 1; i < count; i++) {
        std::string file_name = arguments[i];
        std::cout << "File: " << file_name << std::endl;

        cherry::CherryApplication* cherry_application = cherry_loader.loadApplication(&file_name);
        std::thread application_thread(launch, cherry_application);
        application_thread.join();

        application_threads++;
    }

    while (application_threads > 0) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    delete &cherry;
    return 0;
}