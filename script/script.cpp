//
// Created by DevKiD on 23.10.2023.
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "script.h"

using namespace std;

int scripthc::read(string file_) {
    std::ifstream file(file_);
    std::string str;
    std::vector<std::string> vecOfStrs;

    while (std::getline(file, str))
    {
        vecOfStrs.push_back(str);
    }

    for (std::string &str : vecOfStrs)
    {
        std::cout << str << std::endl;
    }

    return 0;
}
