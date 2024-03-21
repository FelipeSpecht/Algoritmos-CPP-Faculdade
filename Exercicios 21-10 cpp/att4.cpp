#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

    string str;

    cout << "Digite uma frase qualquer: ";
    getline(cin, str);

    for(unsigned int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = toupper(str[i]);
        }
    }

    std::cout << str << '\n';

    return 0;
}
