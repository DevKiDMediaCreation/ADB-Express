#include <iostream>
#include <string>

#include "host/connect.h"
#include "host/disconnect.h"
#include "host/hosthandler.h"
#include "script/handler.h"
#include "host/connect.cpp"

using namespace std;

int adb_install() {
    try {
        int result = system("adb version");
        if (result != 0) {
            std::cout << "ADB is not installed. Please install ADB." << std::endl;

            // Check which Operating System is running
#ifdef _WIN32
            std::cout << "This is a Windows operating system." << std::endl;
            // You may put Windows-specific installation commands here.
#elif __APPLE__
            std::cout << "This is an Apple macOS operating system." << std::endl;
                system("brew install adb"); // Install ADB on macOS using Homebrew.
#elif __linux__
                std::cout << "This is a Linux operating system." << std::endl;
                system("sudo apt install adb"); // Install ADB on Linux using apt.
#elif __unix__
                std::cout << "This is a Unix-based operating system." << std::endl;
                system("sudo apt install adb"); // Install ADB on Unix-based systems using apt.
#else
                throw std::runtime_error("ADB installation failed.");
#endif
        } else {
            return 0;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int main() {

/*    if (!adb_install()) {
        cout << "ADB is not installed. Please install ADB." << endl;
        return 1;
    }
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif */
    cout << "Restart the ADB services..." << endl;
    system("adb kill-server && adb start-server");

    cout << "Welcome to ADB-Express Core Free Edition Version 1.0 Alpha Beta: Data Transfer Protocol Wine Taste"
         << endl;

    hosthandler hosthandlerc;
    handler handlerc;

    while (true) {
        cout << "0 for pair mode" << endl;
        cout << "1 for connect mode" << endl;
        cout << "2 disconnect" << endl;
        cout << "3 Open App" << endl;
        cout << "3.1 Get App"s << endl;
        cout << "4 Close App" << endl;
        cout << "5 Open Script" << endl;
        cout << "6 Handle manuel" << endl;
        cout << "7 List devices" << endl;
        cout << "8 exit" << endl;
        cout << "9 Advance" << endl;
        cout << "10 Install APK" << endl;
        cout << "11 Uninstall APK" << endl;
        cout << "12 Reboot" << endl;
        cout << "Enter your choice." << endl;
        string input;
        getline(cin, input);
        cout << "Enter mode: " << input << endl;

        if (input == "0") {
            // Pair mode
            hosthandlerc.hosthandlerfPair();
        } else if (input == "1") {
            // Connection mode
            connect connector;
            connector.connectf();
        } else if (input == "2") {
            // Disconnect mode
            hosthandlerc.hosthandlerfDisconn();
        } else if (input == "6") {
            // Handle manuel
            handlerc.handlerf();
        } else {
            cout << "\nDon't exist" << endl;
        }
    }
    return 0;
}