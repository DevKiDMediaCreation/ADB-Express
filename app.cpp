#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    vector<string> packages;
    char buffer[128];
    FILE* pipe = popen("adb shell pm list packages", "r");
    if (!pipe) {
        cerr << "Error: Failed to run command." << endl;
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        string package(buffer);
        package.erase(0, 8); // Remove "package:"
        package.erase(package.size() - 1); // Remove newline
        packages.push_back(package);
    }
    pclose(pipe);
    for (const auto& package : packages) {
        cout << package << endl;
    }
    return 0;
}