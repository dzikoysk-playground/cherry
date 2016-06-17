#include <string>
#include "cherry.h"
#include "cherry_loader.h"
#include "cherry_application.h"

using cherry::Cherry;

Cherry::Cherry() {
    cherryLoader = new CherryLoader(this);
}

cherry::CherryApplication* Cherry::loadScript(std::string* fileName) {
    return cherryLoader->loadApplication(fileName);
}

cherry::CherryLoader* Cherry::getCherryLoader() {
    return cherryLoader;
}

static Cherry* initialize() {
    Cherry* cherry = new Cherry();
    return cherry;
}