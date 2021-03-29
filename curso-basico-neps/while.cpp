#include <iostream>

using namespace std;

int cont = 1;

int main() {

    while(cont <= 10) {
        cout << cont << endl;
        cont++;
    }

    cout << "Saiu do while: x = " << cont << endl;

    return 0;
}
