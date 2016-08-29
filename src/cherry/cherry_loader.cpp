#include "cherry_parser.h"
#include "cherry_loader.h"
#include "cherry_application.h"
#include "cherry.h"
#include <locale>
#include <codecvt>
#include <fstream>
#include <sstream>
#include <iostream>

cherry::CherryLoader::CherryLoader(Cherry* cherry_ptr) : cherry(cherry_ptr) {
}

cherry::CherryApplication* cherry::CherryLoader::loadApplication(std::string* file_name_ptr) {
    std::wifstream application_file(*file_name_ptr);
    application_file.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
    std::wstringstream wss;
    wss << application_file.rdbuf();
    application_file.close();

    std::wstring source = wss.str();
    std::wcout << source << std::endl;

    cherry::CherryParser parser(&source);
    cherry::Executable* executable = parser.parse();
    cherry::CherryApplication* cherry_application = new cherry::CherryApplication(executable);

    delete &parser;
    delete &source;
    delete &wss;
    delete &application_file;

    return cherry_application;
}
