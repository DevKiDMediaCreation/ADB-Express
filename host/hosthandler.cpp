//
// Created by DevKiD on 23.10.2023.
//

#include <iostream>
#include <string>

#include "hosthandler.h"
#include "disconnect.cpp"
#include "pair.h"

using namespace std;

int hosthandler::hosthandlerfDisconn() {
    cout << "Enter the index you want disconnect (all, 0, 1...): ";
    string i;
    cin >> i;
    disconnect disconnector;
    disconnector.disconnectf(i);
    return 0;
}

int hosthandler::hosthandlerfPair() {
    paircla paircl;
    string deviceIP;
    cout << "Enter the IP:PORT to pair the devices: ";
    cin >> deviceIP;
    paircl.pairf(deviceIP);
    return 0;
}