#include "cherry_application.h"

cherry::CherryApplication::CherryApplication(cherry::Executable *executable) {
    executables = std::vector<Executable>();
    executables.push_back(*executable);
}

std::vector<Executable> *cherry::CherryApplication::getExecutables() {
    return &executables;
}



