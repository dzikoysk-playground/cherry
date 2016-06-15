#ifndef CHERRY_CHERRY_APPLICATION_H
#define CHERRY_CHERRY_APPLICATION_H

#include <vector>

namespace cherry {

    class Executable;

    class CherryApplication {

    private:
        std::vector<Executable*> executables;

    public:
        CherryApplication(Executable *executable);

        std::vector<Executable*> *getExecutables();

    };

}

#endif //CHERRY_CHERRY_APPLICATION_H
