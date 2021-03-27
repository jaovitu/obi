#include <iostream>

using namespace std;

int N, fat = 1;

int main() {

    cin >> N;

    for(int i = 1; i <= N; i++) {
        fat *= i;
    }

    cout << fat;

    return 0;
}
