//
// Created by DevKiD on 23.10.2023.
//
#include <iostream>
#include <string>

#include "connect.h"
#include "../core/getinput.h"

using namespace std;

inline int connect::connectf() {
    getinput inputf;
    string input = inputf.getinputf("(0 via WiFi, 1 via USB) Enter mode:");

    if (input == "0") {
        string device_ip;
        cout << "Enter the IP address of your Android device: ";
        cin >> device_ip;

        try {
            system(("adb connect " + device_ip).c_str());

        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }

        cout << "Connected to " << device_ip << endl;
    } else if (input == "1") {
        try {
            system("adb usb attach");

        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }
        cout << "Connected via USB" << endl;
    } else {
        cout << "Don't exist" << endl;
    }

    return 0;
}