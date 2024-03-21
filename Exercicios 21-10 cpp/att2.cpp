#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main ()
{
    string str = "String de teste";
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++){
        cout << *it;
    }

    string nome, endereco, telefone;

    cout << "\nDigite seu nome: ";
    getline(cin, nome);
    cout << "Digite seu endereco: ";
    getline(cin, endereco);
    cout << "Digite seu telefone: ";
    getline(cin, telefone);

    str = "";
    str.insert(0, nome);
    str.insert(nome.length(), " que mora em ");
    str.insert(str.length(), endereco);
    str.insert(str.length(), " cujo telefone eh ");
    str.insert(str.length(), telefone);


    cout << str << endl;
    return 0;
}
