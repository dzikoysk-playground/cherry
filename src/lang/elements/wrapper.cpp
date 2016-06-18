#include "wrapper.h"

void cherry::Wrapper::execute() {

}

void cherry::Wrapper::addExecutable(Executable* executable_ptr) {
    if (executable_ptr == nullptr) {
        return;
    }

    executables.push_back(executable_ptr);
}



