#include <iostream>

using namespace std;

int N, P, Q;
char C;

int main() {
    cin >> N >> P >> C >> Q;

    if(C == '+') {
        if(P + Q > N) {
            cout << "OVERFLOW" << endl;

        } else {
            cout << "OK" << endl;
        }
    } else {
        if(P * Q > N) {
            cout << "OVERFLOW" << endl;
        } else {
            cout << "OK" << endl;
        }
    }

    return 0;
}
