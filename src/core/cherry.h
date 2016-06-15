#ifndef CHERRY_CHERRY_H
#define CHERRY_CHERRY_H

#include "cherry_loader.h"

namespace cherry {

    class Cherry {

    private:
        CherryLoader *cherryLoader;

    public:
        Cherry();

        CherryApplication *loadScript(std::string *fileName);

        CherryLoader *getCherryLoader();
    };

}

#endif //CHERRY_CHERRY_H
