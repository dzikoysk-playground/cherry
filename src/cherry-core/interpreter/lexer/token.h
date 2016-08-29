#ifndef CHERRY_TOKEN_H
#define CHERRY_TOKEN_H

#include <string>

namespace cherry {

    class Token {

        public:
            virtual std::wstring* getToken() = 0;

            virtual enum TokenType getTokenType() = 0;

    };

}

#endif //CHERRY_TOKEN_H
