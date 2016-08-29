#ifndef CHERRY_PANDA_LOADER_H
#define CHERRY_PANDA_LOADER_H

#include <string>

namespace cherry {

    class Cherry;

    class CherryApplication;

    class CherryLoader {

        private:
            Cherry* cherry;

        public:
            CherryLoader(Cherry* cherry_ptr);

            CherryApplication* loadApplication(std::string* file_name_ptr);

    };

}

#endif //CHERRY_PANDA_LOADER_H
