#ifndef CHERRY_PANDA_LOADER_H
#define CHERRY_PANDA_LOADER_H

#include <string>

namespace cherry {

    class Cherry;

    class CherryApplication;

    class CherryLoader {

    private:
        Cherry* ptr_cherry;

    public:
        CherryLoader(Cherry* ptr_cherry);

        CherryApplication* loadApplication(std::string* ptr_fileName);
    };

}

#endif //CHERRY_PANDA_LOADER_H
