#include <iostream>
#include "../src/core/cherry.h"
#include "../src/core/cherry_loader.h"
#include "../src/core/cherry_application.h"

int main(int argc, char* args[]) {
    cherry::Cherry cherry = cherry::Cherry();
    cherry::CherryLoader cherryLoader = *cherry.getCherryLoader();

    std::string fileName("hello_world.cherry");
    cherry::CherryApplication cherryApplication = *cherryLoader.loadApplication(&fileName);

    for (int i = 0; i < cherryApplication.getExecutables()->size(); i++) {
        cherry::Executable* executable = cherryApplication.getExecutables()->at(i);
        executable->execute();
    }

    std::cout << "End of App" << std::endl;
}

