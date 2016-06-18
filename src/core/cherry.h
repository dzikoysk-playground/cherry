#ifndef CHERRY_CHERRY_H
#define CHERRY_CHERRY_H

namespace cherry {

    class CherryLoader;

    class CherryApplication;

    class Cherry {

        private:
            CherryLoader* cherryLoader;

        public:
            Cherry();

            CherryApplication* loadScript(std::string* fileName);

            CherryLoader* getCherryLoader();

    };

}

#endif //CHERRY_CHERRY_H
