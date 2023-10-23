//
// Created by DevKiD on 23.10.2023.
//

#ifndef ADB_EXPRESS_SWIPE_H
#define ADB_EXPRESS_SWIPE_H

#include <iostream>

class swipe {
public:
    int custom_swipe(int x1, int y1, int x2, int y2, int duration);
    int bt_swipe();
    int tb_swipe();
    int ldtb_swipe();
    int ldbt_swipe();
    int rdtb_swipe();
    int rdbt_swipe();
    int lr_swipe();
    int rl_swipe();
};

#endif //ADB_EXPRESS_SWIPE_H
