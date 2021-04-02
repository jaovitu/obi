#include <iostream>

using namespace std;

int N, I, A = 0, B = 0;

int main() {
    cin >> N;

    for(int x = 0; x < N; x++) {
        cin >> I;

        if(I == 1) {
            if(A == 0) {
                A = 1;
            } else {
                A = 0;
            }

        } else {
            if(A == 0) {
                A = 1;
            } else {
                A = 0;
            }

            if(B == 0) {
                B = 1;
            } else {
                B = 0;
            }
        }
    }

    cout << A << endl << B << endl;

    return 0;
}
