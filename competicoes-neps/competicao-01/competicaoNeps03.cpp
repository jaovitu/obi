#include <iostream>

using namespace std;

int N, a = 0, b = 1, c;

int main() {

    cin >> N;
    c = a + b;

    for(int i = 1; i < N; i++) {
        a = b;
        b = c;
        c = a + b;
    }

    cout << c << endl;
    

    return 0;
}
