#ifndef CHERRY_CHERRY_APPLICATION_H
#define CHERRY_CHERRY_APPLICATION_H

#include <vector>
#include "../cherry-core/work/executable.h"
#include "../cherry-core/application.h"

namespace cherry {

    class CherryApplication : public Application {

        private:
            std::vector<Executable*> executables;

        public:
            CherryApplication(Executable* executable_ptr);

            ~CherryApplication();

            virtual int launch() override;

            void addExecutable(Executable* executable_ptr);

            std::vector<Executable*>* getExecutables();

    };

}

#endif //CHERRY_CHERRY_APPLICATION_H
