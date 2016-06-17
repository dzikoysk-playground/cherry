#include "../lang/cherry_parser.h"
#include "cherry_loader.h"
#include "cherry_application.h"
#include "cherry.h"
#include <iostream>
#include <fstream>

cherry::CherryLoader::CherryLoader(Cherry* ptr_cherry) : ptr_cherry(ptr_cherry) {
}

cherry::CherryApplication* cherry::CherryLoader::loadApplication(std::string* ptr_fileName) {
    std::ifstream applicationFile(*ptr_fileName);
    std::string source;

    if (applicationFile.is_open()) {
        while (std::getline(applicationFile, source)) { }
        applicationFile.close();
    }

    cherry::CherryParser parser(&source);
    cherry::Executable* executable = parser.parse();
    cherry::CherryApplication* cherryApplication = new cherry::CherryApplication(executable);

    return cherryApplication;
}
