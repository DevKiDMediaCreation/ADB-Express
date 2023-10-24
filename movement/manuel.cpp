//
// Created by DevKiD on 23.10.2023.
//

#include <iostream>
#include <string>

#include "manuel.h"

using namespace std;

int manuel::power() {
    try {
        system("adb shell input keyevent 26");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::wake() {
    try {
        system("adb shell input keyevent 224");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::sleep() {
    try {
        system("adb shell input keyevent 223");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Need authorization
int manuel::reboot() {
    try {
        system("adb shell reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_recovery() {
    try {
        system("adb shell reboot recovery");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_bootloader() {
    try {
        system("adb shell reboot bootloader");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_fastboot() {
    try {
        system("adb shell reboot fastboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_edl() {
    try {
        system("adb shell reboot edl");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_sideload() {
    try {
        system("adb shell reboot sideload-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_download() {
    try {
        system("adb shell reboot download-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::reboot_hboot() {
    try {
        system("adb shell reboot hboot-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::reboot_ruu() {
    try {
        system("adb shell reboot ruu-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::reboot_reset() {
    try {
        system("adb shell reboot reset-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_bootloader() {
    try {
        system("adb shell reboot reset-bootloader-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_edl() {
    try {
        system("adb shell reboot reset-edl-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_sideload() {
    try {
        system("adb shell reboot reset-sideload-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_download() {
    try {
        system("adb shell reboot reset-download-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_hboot() {
    try {
        system("adb shell reboot reset-hboot-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_ruu() {
    try {
        system("adb shell reboot reset-ruu-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_factory() {
    try{
        system("adb shell reboot reset-factory-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::reboot_reset_google() {
    try {
        system("adb shell reboot reset-google-auto-reboot");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}
// End of authorization

int manuel::home() {
    try {
        system("adb shell input keyevent 3");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::back() {
    try {
        system("adb shell input keyevent 4");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::menu() {
    try {
        system("adb shell input keyevent KEYCODE_MENU");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::lock() {
    try {
        system("adb shell input keyevent 26 && adb shell input keyevent KEYCODE_MENU");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::pw_menu() {
    try {
        system("adb shell input keyevent 82 && adb shell input keyevent 82");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::camera() {
    try {
        system("adb shell input keyevent KEYCODE_CAMERA");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::recent() {
    try {
        system("adb shell input keyevent KEYCODE_APP_SWITCH");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::vol_up() {
    try {
        system("adb shell input keyevent 24");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::vol_down() {
    try {
        system("adb shell input keyevent 25");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::vol_mute() {
    try {
        system("adb shell input keyevent 164");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::explorer() {
    try {
        system("adb shell input keyevent 64");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::settings() {
    try {
        system("adb shell input keyevent 176");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

int manuel::enter() {
    try {
        system("adb shell input keyevent 66");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::notification() {
    try {
        system("adb shell input keyevent 83");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::quick_settings() {
    try {
        system("adb shell input keyevent 79");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

int manuel::search() {
    try {
        system("adb shell input keyevent 84");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

inline int manuel::remove() {
    try {
        system("adb shell input keyevent 112"); // Press Backspace
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

inline int manuel::arrow_right() {
    try {
        system("adb shell input keyevent 22"); // Press Right Arrow
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

inline int manuel::arrow_left() {
    try {
        system("adb shell input keyevent 21"); // Press Left Arrow
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

inline int manuel::arrow_up() {
    try {
        system("adb shell input keyevent 19"); // Press Up Arrow
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

inline int manuel::arrow_down() {
    try {
        system("adb shell input keyevent 20"); // Press Down Arrow
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}
