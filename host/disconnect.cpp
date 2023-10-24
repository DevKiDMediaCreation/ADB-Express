//
// Created by DevKiD on 23.10.2023.
//

#include <iostream>
#include <string>

#include "disconnect.h"


using namespace std;

inline int disconnect::disconnectf(string index) {
    cout << "Exit (0 USB, 1 WiFi)";
    if (cin.get() == 0) {
        try {
            system("adb usb detach");
        } catch (const exception &e) {
            cerr << e.what() << '\n';
            return 1;
        }
    } else if (cin.get() == 1) {
        for (char &c: index) {
            c = tolower(c); // Convert the index to lowercase
        }

        if (index == "all") {
            try {
                system("adb disconnect all"); // Disconnect all devices
            } catch (const exception &e) {
                cerr << e.what() << '\n';
                return 1;
            }
        } else {
            try {
                int deviceIndex = stoi(index) - 1;
                if (deviceIndex >= 0) {
                    string command = "adb disconnect " + to_string(deviceIndex);
                    system(command.c_str()); // Disconnect a specific device
                } else {
                    cerr << "Invalid device index." << endl;
                    return 1;
                }
            } catch (const exception &e) {
                cerr << e.what() << '\n';
                return 1;
            }
        }
    }

    return 0;
}

