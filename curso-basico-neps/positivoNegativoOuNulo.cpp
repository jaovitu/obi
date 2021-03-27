#include <iostream>

using namespace std;

int X;

int main() {

    cin >> X;

    if( X == 0 ) {
        cout << "nulo" << endl;

    } else if( X > 0 ) {
        cout << "positivo" << endl;

    } else {
        cout << "negativo" << endl;
    }

    return 0;
}
