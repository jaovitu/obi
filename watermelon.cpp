#include <iostream>

using namespace std;

int peso;

int main() {

    cin >> peso;
    string resp = "NO";

    for(int x = 2; x < peso; x++) {

        int y = peso - x;

        if(x % 2 == 0 and y % 2 == 0) {
            resp = "YES";
            break;
        }
    }

    cout << resp << endl;

    return 0;
}
