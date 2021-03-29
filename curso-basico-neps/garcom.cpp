#include <iostream>

using namespace std;

int N, L, C, cont = 0, quebrados = 0;

int main() {

    cin >> N;

    while(cont < N) {

        cin >> L >> C;

        if( L > C ) {
            quebrados += C;
        }
        
        cont++;
    }

    cout << quebrados << endl;

    return 0;
}
