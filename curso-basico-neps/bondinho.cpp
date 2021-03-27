#include <iostream>

using namespace std;

int A, M;

int main() {

    cin >> A >> M;

    if(A + M <= 50) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}
