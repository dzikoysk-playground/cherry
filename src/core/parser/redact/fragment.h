#ifndef CHERRY_FRAGMENT_H
#define CHERRY_FRAGMENT_H

#include <string>

namespace cherry {

    class Fragment {

        private:
            std::wstring* fragment;
            unsigned long long int line;
            unsigned long long int caret;

        public:
            Fragment();

            Fragment(std::wstring* fragment_ptr);

            ~Fragment();

            void setFragment(std::wstring* fragment_ptr) {
                this->fragment = fragment_ptr;
            }

            void setLine(unsigned long long int line) {
                this->line = line;
            }

            void setCaretPosition(unsigned long long int caret) {
                this->caret = caret;
            }

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

#endif //CHERRY_FRAGMENT_H
