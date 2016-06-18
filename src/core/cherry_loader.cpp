#include "../lang/cherry_parser.h"
#include "cherry_loader.h"
#include "cherry_application.h"
#include "cherry.h"
#include <locale>
#include <codecvt>
#include <fstream>
#include <sstream>
#include <iostream>

cherry::CherryLoader::CherryLoader(Cherry* ptr_cherry) : ptr_cherry(ptr_cherry) {
}

cherry::CherryApplication* cherry::CherryLoader::loadApplication(std::string* file_name_ptr) {
    std::wifstream applicationFile(*file_name_ptr);
    applicationFile.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
    std::wstringstream wss;
    wss << applicationFile.rdbuf();
    std::wstring source = wss.str();

    std::wcout << source << std::endl;

    cherry::CherryParser parser(&source);
    cherry::Executable* executable = parser.parse();
    cherry::CherryApplication* cherryApplication = new cherry::CherryApplication(executable);

    return cherryApplication;
}
