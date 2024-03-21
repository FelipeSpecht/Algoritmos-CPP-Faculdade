#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    string str;
    char carac;

    cout << "Digite uma frase: ";
    getline(cin, str);
    cout << "Agora, digite uma letra: ";
    cin >> carac;

    int qnt;

    qnt = 0;

    for(unsigned int i = 0; i < str.length(); i++){
        if(carac == str.at(i)){
            qnt++;
        }
    }

    carac = toupper(carac);

    cout << "A letra "<< carac << " aparece no texto "<< qnt << " vezes." << endl;
    return 0;
}
