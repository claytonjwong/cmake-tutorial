#include <iostream>
#include "tutorialConfig.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << endl;
        cout << "Usage: " << argv[0] << " number" << endl;
    }
    return 0;
}
