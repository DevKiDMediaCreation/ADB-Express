//
// Created by DevKiD on 23.10.2023.
//

#include <iostream>
#include <string>

#include "pair.h"

using namespace std;

int paircla::pairf(string ip_) {
    try {
        system(("adb pair " + ip_).c_str());

    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    cout << "\nPaired to " << ip_ << " was successfully." << endl;
    return 0;
}