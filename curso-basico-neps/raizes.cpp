#include <iostream>
#include <cmath>

using namespace std;

int N;
double V;

int main() {

    cin >> N;

    for(int x = 0; x < N; x++) {
        cin >> V;

        cout.precision(4);
        cout.setf(ios::fixed);

        cout << sqrt(V) << endl;
    }

    return 0;
}
