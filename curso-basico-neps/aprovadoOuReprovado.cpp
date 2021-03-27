#include <iostream>

using namespace std;

float A, B, media;

int main() {

    cin >> A >> B;
    media = (A + B) / 2;

    if(media >= 7) {
        cout << "Aprovado" << endl;

    } else if(media < 4) {
        cout << "Reprovado" << endl;

    } else {
        cout << "Recuperacao" << endl;
    }

    return 0;
}
