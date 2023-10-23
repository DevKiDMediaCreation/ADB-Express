#include <iostream>
#include <string>
#include <stdexcept>
#include <random>

#include <disconnect.cpp>

using namespace std;

int adb_install() {
    try {
        int result = system("adb");
        if (result != 0) {
            cout << "ADB is not installed. Please install ADB." << endl;
            cout << "Install ADB..." << endl;
            // Check which Operating System is running
            if (system("uname -a | grep -i Darwin")) {
                // Mac OS
                system("brew cask install android-platform-tools");
            } else if (system("uname -a | grep -i Linux")) {
                // Linux
                system("sudo apt-get install android-tools-adb");
            } else if (system("uname -a | grep -i Windows")) {
                // Windows
                system("choco install adb");
            } else {
                throw std::runtime_error("ADB installation failed.");
            }
            throw std::runtime_error("ADB installation failed.");
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int main() {

    if (!adb_install()) {
        cout << "ADB is not installed. Please install ADB." << endl;
        return 1;
    }

    vector<string> devices;
    char buffer[128];
    FILE *pipe = popen("adb devices", "r");
    if (!pipe) {
        cerr << "Error: Failed to run command." << endl;
        return 1;
    }

    cout << "Restart the ADB services..." << endl;
    system("adb kill-server && adb start-server");

    while (true) {

        int mode;
        cout << "0 for pair mode" << endl;
        cout << "1 for connect mode" << endl;
        cout << "2 disconnect" << endl;
        cout << "3 Open App" << endl;
        cout << "4 Close App" << endl;
        cout << "5 Open Script" << endl;
        cout << "6 Handle manuel" << endl;
        cout << "7 List devices" << endl;
        cout << "8 exit" << endl;
        cout << "Enter mode (): ";
        cin >> mode;

        if (mode == 0) {
            string deviceIP;
            cout << "Enter the IP:PORT to pair the devices: ";
            cin >> deviceIP;

            try {
                system(("adb pair " + deviceIP).c_str());

            } catch (const std::exception &e) {
                std::cerr << e.what() << '\n';
                return 1;
            }

            cout << "\nPaired to " << deviceIP << " was successfully." << endl;
        } else if (mode == 1) {
            cout << "0 via WiFi" << endl;
            cout << "1 via USB" << endl;
            cout << "Enter mode (): ";
            cin >> mode;

            if (mode == 0) {
                string device_ip;
                cout << "Enter the IP address of your Android device: ";
                cin >> device_ip;

                try {
                    system(("adb connect " + device_ip).c_str());

                } catch (const std::exception &e) {
                    std::cerr << e.what() << '\n';
                    return 1;
                }

                devices.push_back(device_ip);

                cout << "Connected to " << device_ip << endl;
            } else if (mode == 1) {
                try {
                    system("adb usb");

                } catch (const std::exception &e) {
                    std::cerr << e.what() << '\n';
                    return 1;
                }

                cout << "Connected via USB" << endl;
            } else {
                cout << "Don't exist";
            }

        } else if (mode == 2) {
            cout << "Enter the index you want disconnect (all, 0, 1...): ";
            disconnect(cin.get());
        } else {
            cout << "Don't exist";
        }
    }

    return 0;
}