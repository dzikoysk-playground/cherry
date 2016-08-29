#ifndef CHERRY_METHOD_H
#define CHERRY_METHOD_H

#include <string>
#include "../../cherry-core/work/executable.h"

namespace cherry {

    class Method : public Executable {

        private:
            std::string method_name;

        public:
            void execute();

    };

}

#endif //CHERRY_METHOD_H
