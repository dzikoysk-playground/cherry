#include "fragment.h"

cherry::Fragment::Fragment() {
}

cherry::Fragment::Fragment(std::wstring* fragment_ptr) : fragment(fragment_ptr) {
}

cherry::Fragment::~Fragment() {
    delete fragment;
}





