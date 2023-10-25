//
// Created by DevKiD on 23.10.2023.
//
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

#include "text.h"
#include "../core/getinput.h"

using namespace std;

inline int textmov::textf(string text) {
    getinput inputf;
    string enter = inputf.getinputf("Enter?: (0 no, 1 YES) ");

    // TODO: Add support for all characters
    // TODO: Make a function for all characters
    // TODO: Add error handling
    // TODO: Make a efficient code

    //Split the text into parts by words
    stringstream ss(text);
    vector<std::string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    for (const auto &w: words) {
        // Replace all characters with an adb shell input keyevent
        if (word.find(',')) {
            replace(word.begin(), word.end(), ',', "\\\,");
        } else if (word.find('-')) {
            std::system("adb shell input keyevent 69");
        } else if (word.find('=')) {
            std::system("adb shell input keyevent 70");
        } else if (word.find('(')) {
            std::system("adb shell input keyevent 162");
        } else if (word.find(')')) {
            std::system("adb shell input keyevent 163");
        } else if (word.find('[')) {
            std::system("adb shell input keyevent 71");
        } else if (word.find(']')) {
            std::system("adb shell input keyevent 72");
        } else if (word.find('\\')) {
            std::system("adb shell input keyevent 73");
        } else if (word.find(';')) {
            std::system("adb shell input keyevent 74");
        } else if (word.find('+')) {
            std::system("adb shell input keyevent 81");
        } else if (word.find('\"')) {
            std::system("adb shell input text \\\\\\\"");
        } else if (word.find('\'')) {
            std::system("adb shell input text \\\'");
        }
    }
    
    for (const auto &w: words) {
        system(("adb shell input text " + w).c_str());
        system("adb shell input keyevent 62"); // Press Space
    }

    // TODO: IMPORTANT
    /* Important: Version 1
    try {
        for (char &c: text) {
            cout << c;
            if (c == ' ') {
                std::system("adb shell input keyevent 62");
            } else if (c == ',') {
                std::system("adb shell input keyevent 55");
            } else if (c == '-') {
                std::system("adb shell input keyevent 69");
            } else if (c == '=') {
                std::system("adb shell input keyevent 70");
            } else if (c == '(') {
                std::system("adb shell input keyevent 162");
            } else if (c == ')') {
                std::system("adb shell input keyevent 163");
            } else if (c == '[') {
                std::system("adb shell input keyevent 71");
            } else if (c == ']') {
                std::system("adb shell input keyevent 72");
            } else if (c == '\\') {
                std::system("adb shell input keyevent 73");
            } else if (c == ';') {
                std::system("adb shell input keyevent 74");
            } else if (c == '+') {
                std::system("adb shell input keyevent 81");
            } else if (c == '\"') {
                std::system("adb shell input text \\\\\\\"");
            } else if (c == '\'') {
                std::system("adb shell input text \\\'");
            } else {
                std::string command = "adb shell input text ";
                command += c;
                std::system(command.c_str());
            }
        }
        cout << endl;
        if (enter == "1") {
            system("adb shell input keyevent 66"); // Press Enter
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }*/

    return 0;
}

inline int textmov::removef() {
    try {
        system("adb shell input keyevent 112"); // Press Backspace
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

inline int textmov::delf() {
    try {
        system("adb shell input keyevent 67"); // Press Delete
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}