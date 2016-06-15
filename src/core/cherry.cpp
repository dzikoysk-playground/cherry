#include <string>
#include "cherry.h"

using cherry::Cherry;

Cherry::Cherry() {
    cherryLoader = new CherryLoader(this);
}

CherryApplication *Cherry::loadScript(std::string *fileName) {
    return cherryLoader->loadApplication(fileName);
}

CherryLoader *Cherry::getCherryLoader() {
    return cherryLoader;
}





