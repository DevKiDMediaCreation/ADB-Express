#include <iostream>
#include <string>

#include "host/disconnect.cpp"
#include "host/connect.cpp"
#include "script/handler.cpp"
#include "host/hosthandler.h"

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

    while (true) {

        int mode;
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
        cout << "Enter mode (): ";

        if (cin.get() == 0) {
            // Pair mode
            hosthandler hosthandlerc;
            hosthandlerc.hosthandlerfPair();
        } else if (cin.get() == 1) {
            // Connection mode
            connect connector;
            connector.connectf();
        } else if (cin.get() == 2) {
            // Disconnect mode
            hosthandler hosthandlerc;
            hosthandlerc.hosthandlerfDisconn();
        } else if (cin.get() == 6) {
            // Handle manuel
            handler handlerc;
            handlerc.handlerf();
        } else {
            cout << "Don't exist";
        }
    }
    return 0;
}