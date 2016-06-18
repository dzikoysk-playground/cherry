#ifndef CHERRY_CHERRY_PARSER_H
#define CHERRY_CHERRY_PARSER_H

#include <string>
#include "../core/parser/parser.h"
#include "../core/parser/redact/divider/divider.h"
#include "elements/wrapper.h"

namespace cherry {

    class CherryParser : public Parser {

        private:
            std::wstring* source;
            cherry::Divider* divider;

        public:
            CherryParser(std::wstring* source_ptr);

            virtual Wrapper* parse() override;

            cherry::Divider* getDivider() {
                return divider;
            }

            std::wstring* getSource() {
                return source;
            }

    };

}

#endif //CHERRY_CHERRY_PARSER_H
