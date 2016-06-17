#ifndef CHERRY_DIVIDER_H
#define CHERRY_DIVIDER_H

#include <string>

namespace cherry {

    class Divider {

    private:
        std::string* source;

    public:
        Divider(std::string* source);

        std::string* getNext();

    };

}

#endif //CHERRY_DIVIDER_H
