#include <iostream>

using namespace std;

int N, a = 0, b = 1, c;

int main() {

    cin >> N;
    c = a + b;
    
    cout << a << " " << b << " " << c;

    for (int i = 1; i <= N - 3; i++) {
        a = b;
        b = c;
        c = a + b;
        cout << " " << c;
    }
    

    return 0;
}
