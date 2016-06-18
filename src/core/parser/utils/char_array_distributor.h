#ifndef CHERRY_CHAR_ARRAY_DISTRIBUTOR_H
#define CHERRY_CHAR_ARRAY_DISTRIBUTOR_H

#include <string>

namespace cherry {

    class CharArrayDistributor {

        private:
            const wchar_t* array;
            unsigned long long int length;
            unsigned long long int index;

        public:
            CharArrayDistributor(std::wstring* string_ptr);

            wchar_t previous();

            wchar_t current();

            wchar_t next();

            wchar_t further();

            wchar_t future();

            bool hasNext();

            wchar_t getPrevious();

            wchar_t getPrevious(int t);

            wchar_t getLast();

    };

}

#endif //CHERRY_CHAR_ARRAY_DISTRIBUTOR_H
