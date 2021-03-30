#include <iostream>

using namespace std;

int D;

int main() {

    cin >> D;

    if(D <= 800) {
        cout << 1 << endl;

    } else if(800 < D and D <= 1400) {
        cout << 2 << endl;

    } else {
        cout << 3 << endl;
    }

    return 0;
}
