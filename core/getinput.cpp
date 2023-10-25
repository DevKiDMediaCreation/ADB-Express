//
// Created by DevKiD on 25.10.2023.
//

#include <iostream>
#include <string>

#include "getinput.h"

using namespace std;

string getinput::getinputf(string text) {
    string input;
    cout << text << endl;
    getline(cin, input);
    return input;
}