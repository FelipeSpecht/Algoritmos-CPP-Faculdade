#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

    string str;

    cout << "Digite uma frase qualquer: ";
    getline(cin, str);

    for(int i = str.length()-1; i >= 0; i--){
        cout << str[i];
    }

    return 0;
}
