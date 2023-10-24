//
// Created by DevKiD on 23.10.2023.
//

#include <iostream>
#include <string>

#include "swipe.h"

using namespace std;

int swipe::custom_swipe(int x1, int y1, int x2, int y2, int duration = 100) {
    try {
        system(("adb shell input swipe " + to_string(x1) + " " + to_string(y1) + " " + to_string(x2) + " " +
               to_string(y2) + " " + to_string(duration)).c_str());
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Bottom to Top
int swipe::bt_swipe() {
    try {
        system("adb shell input swipe 500 1500 500 0 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Top to Bottom
int swipe::tb_swipe() {
    try {
        system("adb shell input swipe 500 0 500 1500 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Left Diagional Top to Bottom
int swipe::ldtb_swipe() {
    try {
        system("adb shell input swipe 0 0 500 1500 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Left Diagional Bottom to Top
int swipe::ldbt_swipe() {
    try {
        system("adb shell input swipe 500 1500 0 0 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Right Diagional Top to Bottom
int swipe::rdtb_swipe() {
    try {
        system("adb shell input swipe 0 0 1500 500 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Right Diagional Bottom to Top
int swipe::rdbt_swipe() {
    try {
        system("adb shell input swipe 1500 500 0 0 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Left to Right
int swipe::lr_swipe() {
    try {
        system("adb shell input swipe 0 500 150 500 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// Right to Left
int swipe::rl_swipe() {
    try {
        system("adb shell input swipe 150 500 0 500 100");
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}