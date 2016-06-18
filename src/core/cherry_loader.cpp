#include "../lang/cherry_parser.h"
#include "cherry_loader.h"
#include "cherry_application.h"
#include "cherry.h"
#include <locale>
#include <codecvt>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>

cherry::CherryLoader::CherryLoader(Cherry* ptr_cherry) : ptr_cherry(ptr_cherry) {
}

cherry::CherryApplication* cherry::CherryLoader::loadApplication(std::string* ptr_fileName) {
    std::wifstream applicationFile(*ptr_fileName);

    std::locale empty_locale = std::locale();
    std::codecvt_utf8<wchar_t>* converter = new std::codecvt_utf8<wchar_t>;
    std::locale utf8_locale = std::locale(empty_locale, converter);

    applicationFile.imbue(utf8_locale);
    std::wstringstream wss;
    wss << applicationFile.rdbuf();
    std::wstring source = wss.str();

    cherry::CherryParser parser(&source);
    cherry::Executable* executable = parser.parse();
    cherry::CherryApplication* cherryApplication = new cherry::CherryApplication(executable);

    return cherryApplication;
}
