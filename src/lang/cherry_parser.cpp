#include "cherry_parser.h"
#include "elements/wrapper.h"

cherry::CherryParser::CherryParser(std::wstring* source_ptr) : source(source_ptr) {
    divider = new cherry::Divider(source_ptr);
}

cherry::Wrapper* cherry::CherryParser::parse() {
    while (divider->hasNext()) {

    }

    return nullptr;
}