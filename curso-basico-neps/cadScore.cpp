#include <iostream>

using namespace std;

int P, N, F;

int main() {
    cin >> P >> N;

    for(int x = 0; x < N; x++) {
        cin >> F;
        P += F;

        if(P > 100) {
            P = 100;
            continue;
        }

        if(P < 0) {
            P = 0;
            continue;
        }
       
    }

    cout << P << endl;

    return 0;
}
