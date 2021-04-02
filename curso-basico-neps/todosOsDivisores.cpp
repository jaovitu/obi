#include <iostream>

using namespace std;

int X;

int main() {

    cin >> X;

    for(int i = 1; i <= X; i++) {
        if(X % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
