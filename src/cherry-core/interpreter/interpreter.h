#ifndef CHERRY_INTERPRETER_H
#define CHERRY_INTERPRETER_H

#include "../application.h"

namespace cherry {

    class Interpreter {

        public:
            virtual Application* interpret() = 0;

    };

}

#endif //CHERRY_INTERPRETER_H
