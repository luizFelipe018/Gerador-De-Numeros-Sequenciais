#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int gerarNumeroAleatorio() {
    return rand() % 10;  
}

int main() {
    int QuantidadeDeNumeros;

    cout<<"Digite a quantidade de  numeros que a sequencia deve ter.";
    cin>> QuantidadeDeNumeros;gi
    srand(static_cast<unsigned>(time(NULL)));

    
    for (int i = 0; i < QuantidadeDeNumeros; i++) {
        int numero = gerarNumeroAleatorio();
        cout << numero;
    }
    cout << endl;

    return 0;
}
