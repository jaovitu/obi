#include <iostream>

using namespace std;

int N, V, valorAtual, sequenciaAtual, maiorSequencia;

int main() {

    cin >> N;

    for(int x = 0; x < N; x++) {
        cin >> V;

        if(x == 0) {
            valorAtual = V;
            sequenciaAtual = 1;
            maiorSequencia = 1;
            continue;
        }

        if(V == valorAtual) {
            sequenciaAtual++;

            if(sequenciaAtual > maiorSequencia) {
                maiorSequencia = sequenciaAtual;
            }
        } else {
            valorAtual = V;
            sequenciaAtual = 1;
        }
    }

    cout << maiorSequencia << endl;

    return 0;
}
