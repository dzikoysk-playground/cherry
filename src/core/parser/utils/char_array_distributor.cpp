#include "char_array_distributor.h"

using cherry::CharArrayDistributor;

CharArrayDistributor::CharArrayDistributor(std::wstring* string_ptr) {
    this->length = string_ptr->size();
    this->array = string_ptr->c_str();
}

wchar_t CharArrayDistributor::previous() {
    if (index - 1 < length) {
        index--;

        if (index < 0) {
            index = 0;
        }

        return array[index];
    }
    else {
        return getLast();
    }
}

wchar_t CharArrayDistributor::current() {
    return array[index];
}

wchar_t CharArrayDistributor::next() {
    if (index + 1 < length) {
        index++;
        return array[index];
    }
    else {
        return getLast();
    }
}

wchar_t CharArrayDistributor::further() {
    if (index + 1 < length) {
        return array[index + 1];
    }
    else {
        return getLast();
    }
}

wchar_t CharArrayDistributor::future() {
    if (index + 2 < length) {
        return array[index + 2];
    }
    else {
        return getLast();
    }
}

bool CharArrayDistributor::hasNext() {
    return index < length - 1;
}

wchar_t CharArrayDistributor::getPrevious() {
    return index - 1 > 0 ? array[index - 1] : array[0];
}

wchar_t CharArrayDistributor::getPrevious(int t) {
    return index - t > 0 ? array[index - t] : array[0];
}

wchar_t CharArrayDistributor::getLast() {
    return array[length - 1];
}

