#include "cherry_application.h"

cherry::CherryApplication::CherryApplication(cherry::Executable* executable_ptr) {
    executables = std::vector<Executable*>();
    addExecutable(executable_ptr);
}

cherry::CherryApplication::~CherryApplication() {
    delete &executables;
}

int cherry::CherryApplication::launch() {
    for (Executable* executable : executables) {
        executable->execute();
    }
    return 0;
}

void cherry::CherryApplication::addExecutable(cherry::Executable* executable_ptr) {
    if (executable_ptr == nullptr) {
        return;
    }
    executables.push_back(executable_ptr);
}

std::vector<cherry::Executable*>* cherry::CherryApplication::getExecutables() {
    return &executables;
}

