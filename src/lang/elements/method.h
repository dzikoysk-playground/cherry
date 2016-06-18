#ifndef CHERRY_METHOD_H
#define CHERRY_METHOD_H

#include <string>
#include "../../core/work/executable.h"

class Method : public cherry::Executable {

    private:
        std::string methodName;

    public:
        void execute();

};


#endif //CHERRY_METHOD_H
