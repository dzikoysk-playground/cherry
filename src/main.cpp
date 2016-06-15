#include <string>
#include "core/cherry.h"

int main(int count, char *arguments[]) {
    if (count < 2) {
        return 0;
    }

    cherry::Cherry cherry;
    cherry::CherryLoader cherryLoader = *cherry.getCherryLoader();

    for (int i = 1; i < count; i++) {
        std::string fileName = arguments[i];
        cherryLoader.loadApplication(&fileName);
    }

    return 0;
}

