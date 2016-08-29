#ifndef CHERRY_LEXER_H
#define CHERRY_LEXER_H

#include "tokenized_source.h"

namespace cherry {

    class Lexer {

        public:
            virtual TokenizedSource* convert() = 0;

    };

}

#endif //CHERRY_LEXER_H
