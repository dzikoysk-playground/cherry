#include <iostream>
#include "cherry_parser.h"

cherry::CherryParser::CherryParser(std::wstring* source_ptr) : source(source_ptr) {
    wrapper = new cherry::Wrapper();
    divider = new cherry::Divider(source_ptr);
    formatter = new cherry::Formatter();
}

cherry::CherryParser::~CherryParser() {
    delete divider;
    delete formatter;
}

cherry::Wrapper* cherry::CherryParser::parse() {
    while (divider->hasNext()) {
        cherry::Fragment fragment = *divider->getNext();

        formatter->format(&fragment);
        Executable* executable = parseFragment(&fragment);

        if (executable == nullptr) {
            std::cout << "[CherryParser] Error: nullptr executable at " << divider->getLine() << ":" << divider->getCaretPosition() << std::endl;
            continue;
        }

        wrapper->addExecutable(executable);
    }

    return wrapper;
}

cherry::Executable* cherry::CherryParser::parseFragment(cherry::Fragment* fragment_ptr) {
    return nullptr;
}





