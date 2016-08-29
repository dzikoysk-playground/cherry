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

