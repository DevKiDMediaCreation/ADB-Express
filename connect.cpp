//
// Created by DevKiD on 23.10.2023.
//
#include <iostream>
#include <string>
#include <random>

#include "main.cpp"

using namespace std;

int connect() {
    cout << "0 via WiFi" << endl;
    cout << "1 via USB" << endl;
    cout << "Enter mode (): ";

    if (cin.get() == 0) {
        string device_ip;
        cout << "Enter the IP address of your Android device: ";
        cin >> device_ip;

        try {
            system(("adb connect " + device_ip).c_str());

        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }

        add_devices(device_ip);

        cout << "Connected to " << device_ip << endl;
    } else if (cin.get() == 1) {
        try {
            system("adb usb attach");

        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }
        add_devices("USB");
        cout << "Connected via USB" << endl;
    } else {
        cout << "Don't exist" << endl;
    }

    return 0;
}