#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[]) {

    vector<int> numerosInteiros;

    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;

    int num, controlador = 0;

    while (controlador == 0) {
        cout << "Digite um numero inteiro qualquer: ";
        cin >> num;

        if(num == 0){
            controlador = 1;
        }else{
            numerosInteiros.push_back(num);
        }
    }

    int maior = numerosInteiros[0];
    int menor = numerosInteiros[0];
    float media = 0;

    for(it = numerosInteiros.begin(); it != numerosInteiros.end(); it++){
        cout << *it << " ";
        if(*it > maior){
            maior = *it;
        }
        if(*it < menor){
            menor = *it;
        }
        media = media + *it;
    }

    cout << endl;
    for(rit = numerosInteiros.rbegin(); rit != numerosInteiros.rend(); rit++){
        cout << *rit << " ";
    }

    media = media / numerosInteiros.size();

    cout << "\nMaior = " << maior << "\nMenor = " << menor << "\nMedia = " << media << endl;

    cout << "Numeros pares: ";
    for(rit = numerosInteiros.rbegin(); rit != numerosInteiros.rend(); rit++){
        if((*rit % 2) == 0){
            cout << *rit << " ";
        }
    }

    cout << "\nNumeros impares: ";
    for(it = numerosInteiros.begin(); it != numerosInteiros.end(); it++){
        if((*it%2)==1){
            cout << *it << " ";
        }
    }

    sort(numerosInteiros.begin(),numerosInteiros.end());
    cout << "\nNumeros impares (ordenados de forma correta): ";
    for(it = numerosInteiros.begin(); it != numerosInteiros.end(); it++){
        if((*it%2)==1){
            cout << *it << " ";
        }
    }
    return 0;
}
