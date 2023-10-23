//
// Created by DevKiD on 23.10.2023.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <random>

using namespace std;

int disconnect(string index) {
    index = index.lowerCase();
    if (index == "all") {
        try {
            system("adb disconnect");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }
    } else {
        try {
            system("adb disconnect " + (int(index) - 1));
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }
    }

}