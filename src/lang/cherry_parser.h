#ifndef CHERRY_CHERRY_PARSER_H
#define CHERRY_CHERRY_PARSER_H

#include <string>
#include "../core/parser/parser.h"

namespace cherry {

    class CherryParser : public Parser {

    private:
        std::string *source;

    public:
        CherryParser(std::string *source_ptr);

    };

}

#endif //CHERRY_CHERRY_PARSER_H
