#include <iostream>
using namespace std;
int main() {
    float temperaturas[7];  
    cout << "Digite as temperaturas de cada dia da semana: ";
    for(int i=0; i<7; i++) {
        cout << "Temperatura do dia " << i+1 << ": ";
        cin >> temperaturas[i];
    }
    float menor = temperaturas[0], maior = temperaturas[0];
    for(int i=1; i<7; i++) {
        if(temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if(temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }
    float soma = 0;
    for(int i=0; i<7; i++) {
        soma += temperaturas[i];
    }
    float media = soma/7;
    int abaixo_media = 0, acima_media = 0;
    for(int i=0; i<7; i++) {
        if(temperaturas[i] < media) {
            abaixo_media++;
        } else if(temperaturas[i] > media) {
            acima_media++;
        }
    }
    cout << "Menor temperatura: " << menor << endl;
    cout << "Maior temperatura: " << maior << endl;
    cout << "Temperatura média: " << media << endl;
    cout << "Dias com temperatura abaixo da média: " << abaixo_media << endl;
    cout << "Dias com temperatura acima da média: " << acima_media << endl;
    return 0;
}