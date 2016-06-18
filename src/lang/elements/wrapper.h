#ifndef TESTS_WRAPPER_H
#define TESTS_WRAPPER_H


#include <vector>
#include "../../core/work/executable.h"

namespace cherry {

class Wrapper : public Executable {

    protected:
        std::vector<Executable*> executables;

    public:
        void execute();

        std::vector<Executable*> getExecutables() {
            return executables;
        }

};

}

#endif //TESTS_WRAPPER_H
