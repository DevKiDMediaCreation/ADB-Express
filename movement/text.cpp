//
// Created by DevKiD on 23.10.2023.
//
#include <iostream>
#include <string>

#include "text.h"

using namespace std;

inline int text::textf(string text) {
    try {
        for (char &c: text) {
            if (c == ' ') {
                system("adb shell input keyevent 62");
            } else if (c == ',') {
                system("adb shell input keyevent 55");
            } else if (c == '-') {
                system("adb shell input keyevent 69");
            } else if (c == '=') {
                system("adb shell input keyevent 70");
            } else if (c == '(') {
                system("adb shell input keyevent 162");
            } else if (c == ')') {
                system("adb shell input keyevent 163");
            } else if (c == '[') {
                system("adb shell input keyevent 71");
            } else if (c == ']') {
                system("adb shell input keyevent 72");
            } else if (c == '\\') {
                system("adb shell input keyevent 73");
            } else if (c == ';') {
                system("adb shell input keyevent 74");
            } else if (c == '+') {
                system("adb shell input keyevent 81");
            } else {
                system(("adb shell input text " + text).c_str());
            }
        }
        system("adb shell input keyevent 66"); // Press Enter
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}

inline int text::removef() {
    try {
        system("adb shell input keyevent 112"); // Press Backspace
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

inline int text::delf() {
    try {
        system("adb shell input keyevent 67"); // Press Delete
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}