#include <iostream>
#include "../src/core/cherry.h"
#include "../src/core/cherry_loader.h"
#include "../src/core/cherry_application.h"

int main(int argc, char* args[]) {
    cherry::Cherry cherry = cherry::Cherry();
    cherry::CherryLoader cherry_loader = *cherry.getCherryLoader();

    std::string fileName("hello_world.cherry");
    cherry::CherryApplication cherry_application = *cherry_loader.loadApplication(&fileName);

    for (int i = 0; i < cherry_application.getExecutables()->size(); i++) {
        cherry::Executable* executable = cherry_application.getExecutables()->at(i);
        executable->execute();
    }

    std::cout << "End of App" << std::endl;
}

