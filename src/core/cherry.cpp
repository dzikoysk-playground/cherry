#include <string>
#include "cherry.h"
#include "cherry_loader.h"
#include "cherry_application.h"

using cherry::Cherry;

Cherry::Cherry() {
    cherry_loader = new CherryLoader(this);
}

cherry::CherryApplication* Cherry::loadScript(std::string* file_name_ptr) {
    return cherry_loader->loadApplication(file_name_ptr);
}

cherry::CherryLoader* Cherry::getCherryLoader() {
    return cherry_loader;
}