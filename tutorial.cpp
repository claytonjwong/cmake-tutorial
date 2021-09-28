#include <iostream>
#include "tutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions/mysqrt.h"
#else
#include <cmath>
#endif

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << endl;
        cout << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }
    auto x = stod(argv[1]);
#ifdef USE_MYMATH
    cout << x << " is " << mysqrt(x) << endl;
#else
    cout << x << " is " << sqrt(x) << endl;
#endif
    return 0;
}
