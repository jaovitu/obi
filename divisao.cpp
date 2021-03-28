#include <iostream>

using namespace std;

float A, B;

int main() {
    cin >> A >> B;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << A / B << endl;

    return 0;
}
