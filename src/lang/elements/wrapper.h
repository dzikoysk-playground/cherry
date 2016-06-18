#ifndef CHERRY_WRAPPER_H
#define CHERRY_WRAPPER_H


#include <vector>
#include "../../core/work/executable.h"

namespace cherry {

    class Wrapper : public Executable {

        protected:
            std::vector<Executable*> executables;

        public:
            void execute();

            void addExecutable(Executable* executable_ptr);

            std::vector<Executable*> getExecutables() {
                return executables;
            }

    };

}

#endif //CHERRY_WRAPPER_H
