//
// Created by DevKiD on 23.10.2023.
//
#include <iostream>
#include <string>

#include "text.h"

using namespace std;

int text::textf(string text) {
    try {
        try {
            for (char &c: text) {
                if (c == ' ') {
                    system("adb shell input text 62");
                } else if (c == ',') {
                    system("adb shell input text 55");
                } else if (c == '-') {
                    system("adb shell input text 69");
                } else if (c == '=') {
                    system("adb shell input text 70");
                } else if (c == '(') {
                    system("adb shell input text 162");
                } else if (c == ')') {
                    system("adb shell input text 163");
                } else if (c == '[') {
                    system("adb shell input text 71");
                } else if (c == ']') {
                    system("adb shell input text 72");
                } else if (c == '\\') {
                    system("adb shell input text 73");
                } else if (c == ';') {
                    system("adb shell input text 74");
                } else if (c == '+') {
                    system("adb shell input text 81");
                } else {
                    system(("adb shell input text " + text).c_str());
                }
            }
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }
        system("adb shell input keyevent 66"); // Press Enter
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}