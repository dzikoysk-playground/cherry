#ifndef CHERRY_TOKENIZED_SOURCE_H
#define CHERRY_TOKENIZED_SOURCE_H

#include "token.h"

namespace cherry {

    class TokenizedSource {

        public:
            virtual int size() = 0;

            virtual Token* getLine(int lineNumber) = 0;

            virtual Token** getSource() = 0;

    };
}

#endif //CHERRY_TOKENIZED_SOURCE_H
