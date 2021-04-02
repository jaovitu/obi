#include <iostream>

using namespace std;

int main() {

    for(int x = 1; x <= 5; x++) {
        cout << x << endl;
        if(x == 2){
            break;
        }
    }

    for(int x = 1; x <= 5; x++) {
        if(x == 2){
            continue;
        }
        cout << x << endl;
    }


    return 0;
}
