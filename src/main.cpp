#include <string>
#include "core/cherry.h"
#include "core/cherry_loader.h"

int main(int count, char* arguments[]) {
    if (count < 2) {
        return 0;
    }

    cherry::Cherry cherry;
    cherry::CherryLoader cherry_loader = *cherry.getCherryLoader();

    for (int i = 1; i < count; i++) {
        std::string file_name = arguments[i];
        cherry_loader.loadApplication(&file_name);
    }

    return 0;
}