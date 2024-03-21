#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

    string str1, str2;

    cout << "Digite uma frase qualquer: ";
    getline(cin, str1);
    cout << "Digite outra frase qualquer: ";
    getline(cin, str2);

    if(str1 == str2){
        cout << "Ambas frases sao iguais";
    }else{
        cout << "Ambas frases sao diferentes";
    }

    return 0;
}
