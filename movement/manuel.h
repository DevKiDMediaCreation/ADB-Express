//
// Created by DevKiD on 23.10.2023.
//

#ifndef ADB_EXPRESS_MANUEL_H
#define ADB_EXPRESS_MANUEL_H

class manuel {
public:
    int power();
    int wake();
    int sleep();
    int reboot();
    int reboot_recovery();
    int reboot_bootloader();
    int reboot_fastboot();
    int reboot_edl();
    int reboot_sideload();
    int reboot_download();
    int reboot_hboot();
    int reboot_ruu();
    int reboot_reset();
    int reboot_reset_bootloader();
    int reboot_reset_edl();
    int reboot_reset_sideload();
    int reboot_reset_download();
    int reboot_reset_hboot();
    int reboot_reset_ruu();
    int reboot_reset_factory();
    int reboot_reset_google();
    int home();
    int back();
    int menu();
    int lock();
    int pw_menu();
    int camera();
    int recent();
    int vol_up();
    int vol_down();
    int vol_mute();
    int explorer();
    int settings();
    int enter();
    int notification();
    int quick_settings();
    int search();
};

#endif //ADB_EXPRESS_MANUEL_H
