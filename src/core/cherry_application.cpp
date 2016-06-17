#include "cherry_application.h"
#include "work/executable.h"

cherry::CherryApplication::CherryApplication(cherry::Executable* executable) {
    executables = std::vector<Executable*>();
    executables.push_back(executable);
}

std::vector<cherry::Executable*>* cherry::CherryApplication::getExecutables() {
    return &executables;
}
