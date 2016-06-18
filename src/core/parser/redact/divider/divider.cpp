#include "divider.h"

cherry::Divider::Divider(std::wstring* source) : source(source) {
    caret = 0;
    line = 0;
}


cherry::Fragment* cherry::Divider::getNext() {
    for (; caret < source->size(); caret++) {

    }
    return nullptr;
}

bool cherry::Divider::hasNext() {
    return caret < source->size();
}


