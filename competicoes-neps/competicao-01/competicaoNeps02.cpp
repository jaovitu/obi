#include <iostream>

using namespace std;

bool eh_primo(int x){
	int cont = 1;

    for(int i = 2; i <= x; i++) {
        if(x % i == 0) {
            cont += 1;
        }
    }

    if(cont == 2) {
        return true;
    } else {
        return false;
    }
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
