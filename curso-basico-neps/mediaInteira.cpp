#include <iostream>

using namespace std;

int A, B;

int main() {
    cin >> A >> B;

    cout.precision(0);
    cout.setf(ios::fixed);

    cout << (A + B) / 2 << endl;

    return 0;
}
