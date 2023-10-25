//
// Created by ngosc on 25.10.2023.
//

#include "reconnect.h"
#include "../core/getinput.h"

#include <iostream>
#include <string>

using namespace std;

int reconnect::reconnectf() {
    getinput getinputc;
    string mode = getinputc.getinputf("0 - devices, 1 - offlines:");
    try {
        if (mode == "0") {
            system("adb reconnect device");
        } else if (mode == "1") {
            system("adb reconnect offline");
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}