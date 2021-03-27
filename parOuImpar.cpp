#include <iostream>

using namespace std;

int B, C;

int main() {

    cin >> B >> C;

    if( (B + C) % 2 == 0 ) {
        cout << "Bino" << endl;
    } else {
        cout << "Cino" << endl;
    }

    return 0;
}
