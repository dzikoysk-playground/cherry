#ifndef TESTS_FRAGMENT_H
#define TESTS_FRAGMENT_H

#include <string>

namespace cherry {

    class Fragment {

        private:
            std::wstring* fragment;
            unsigned long long int line;
            unsigned long long int caret;

        public:
            Fragment();

            unsigned long long int getLine() {
                return line;
            }

            unsigned long long int getCaretPosition() {
                return caret;
            }

            std::wstring* getFragment() {
                return fragment;
            }

    };

}

#endif //TESTS_FRAGMENT_H
