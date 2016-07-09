#ifndef CHERRY_CHERRY_H
#define CHERRY_CHERRY_H

namespace cherry {

    class CherryLoader;

    class CherryApplication;

    class Cherry {

        private:
            CherryLoader* cherry_loader;

        public:
            Cherry();

            ~Cherry();

            CherryApplication* loadScript(std::string* file_name_ptr);

            CherryLoader* getCherryLoader();

    };

}

#endif //CHERRY_CHERRY_H
