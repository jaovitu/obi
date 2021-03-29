#include <iostream>

using namespace std;

int A, B, C;

int main() {

    cin >> A >> B >> C;

    if ( A == B and B == C and C == A ) {
        cout << '*' << endl;

    } else if( B == C and B != A ) {
        cout << 'A' << endl;

    } else if( A == C and A != B ) {
        cout << 'B' << endl;

    } else {
        cout << 'C' << endl;
    }

    return 0;
}
