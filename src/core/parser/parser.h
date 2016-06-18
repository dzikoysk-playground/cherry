#ifndef CHERRY_PARSER_H
#define CHERRY_PARSER_H

#include "../work/executable.h"

namespace cherry {

    class Parser {

        public:
            virtual Executable* parse() = 0;

    };

}

#endif //CHERRY_PARSER_H
