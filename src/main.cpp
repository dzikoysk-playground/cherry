#include <string>
#include <thread>
#include <iostream>
#include "core/cherry.h"
#include "core/cherry_loader.h"
#include "core/cherry_application.h"

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