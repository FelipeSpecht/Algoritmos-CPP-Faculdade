#include <iostream>
using namespace std;

class Pessoa {
    string nome, sobrenome, sexo; //define os atributos da classe
    int idade;
private: //define os métodos privados
    int tamanhoDoNome(){ return (int)this->nome.length(); }
    int tamanhoDoSobrenome(){ return (int)this->sobrenome.length(); }
public: //define os metodos publicos
    Pessoa() { }
    void setNome(string nome) { this->nome = nome; }
    string getNome() { return this->nome; }
    void setSobrenome(string sobrenome) { this->sobrenome = sobrenome; }
    string getSobrenome() { return this->sobrenome; }
    void setSexo(string sexo) { this->sexo = sexo; }
    string getSexo() { return this->sexo; }
    void setIdade(int idade) { this->idade = idade; }
    int getIdade() { return this->idade; }
    int tamanhoNomeCompleto() { return this->tamanhoDoNome() + this->tamanhoDoSobrenome(); }
};

int main(int argc, const char * argv[])
{
    string nome, sobrenome, sexo;
    int idade;
    cout << "Qual seu nome? ";
    getline(cin, nome);
    cout << "Qual o seu sobrenome? ";
    cin >> sobrenome;
    cout << "Qual a sua idade? ";
    cin >> idade;
    cout << "Qual o seu sexo? ";
    cin >> sexo;

    Pessoa *pessoa = new Pessoa();
    pessoa->setNome(nome);
    pessoa->setSobrenome(sobrenome);
    pessoa->setIdade(idade);
    pessoa->setSexo(sexo);

    cout << "Nome: " << pessoa->getNome() << endl;
    cout << "Sobrenome: " << pessoa->getSobrenome() << endl;
    cout << "Idade: " << pessoa->getIdade() << endl;
    cout << "Sexo: " << pessoa->getSexo() << endl;
    cout << "Tamanho do nome: " << pessoa->tamanhoNomeCompleto() << endl;

    delete pessoa;
    return 0;
}
