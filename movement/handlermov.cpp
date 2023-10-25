//
// Created by DevKiD on 24.10.2023.
//

#include <iostream>
#include <string>

#include "handlermov.h"
#include "text.h"
#include "../core/getinput.h"

using namespace std;

inline int handlermov::handlermovf() {
    getinput inputf;
    string input = inputf.getinputf("(0 text, 1 getinput) Enter mode: ");

    if (input == "0") {
        string dtext = inputf.getinputf("Enter the text: ");

        try {
            textmov textc;
            textc.textf(dtext);
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            return 1;
        }

        cout << "Text: " << dtext << endl;
    } else if (input == "1") {

    } else {
        cout << "Don't exist" << endl;
    }

    return 0;
}