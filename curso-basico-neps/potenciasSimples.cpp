#include <iostream>
#include <cmath>

using namespace std;

double x, y;

int main() {

    cin >> x >> y;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << pow(x, y) << endl;

    return 0;
}
