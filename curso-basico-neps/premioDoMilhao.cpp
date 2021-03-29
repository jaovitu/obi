#include <iostream>

using namespace std;

int N, A, dias = 0, acessos = 0;

int main() {

    cin >> N;

    while(acessos < 1000000) {
        cin >> A;
        acessos += A;
        dias++;
    }

    cout << dias << endl;

    return 0;
}
