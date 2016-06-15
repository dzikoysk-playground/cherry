#ifndef CHERRY_PANDA_LOADER_H
#define CHERRY_PANDA_LOADER_H

#include <string>
#include "cherry.h"
#include "cherry_application.h"

namespace cherry {

    class CherryLoader {

    private:
        Cherry *ptr_cherry;

    public:
        CherryLoader(Cherry *ptr_cherry);

        CherryApplication *loadApplication(std::string *ptr_fileName);
    };

}

#endif //CHERRY_PANDA_LOADER_H
