#ifndef CHERRY_DIVIDER_H
#define CHERRY_DIVIDER_H

#include <string>
#include "../fragment.h"

namespace cherry {

    class Divider {

        private:
            std::wstring* source;
            unsigned long long int line;
            unsigned long long int caret;

        public:
            Divider(std::wstring* source);

            Fragment* getNext();

            bool hasNext();

            unsigned long long int getLine() {
                return line;
            }

            unsigned long long int getCaretPosition() {
                return caret;
            }

    };

}

#endif //CHERRY_DIVIDER_H
