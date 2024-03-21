#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class Pessoa{
    string nome;
    char sexo, corOlhos;
    Pessoa *pai;
    Pessoa *mae;
public:
    Pessoa(string nome, char sexo, char corOlhos){
        this->nome = nome;
        this->sexo = sexo;
        this->corOlhos = corOlhos;
        this->pai = NULL;
        this->mae = NULL;
    }
    Pessoa(string nome, char sexo, char corOlhos, Pessoa *pai, Pessoa *mae){
        this->nome = nome;
        this->sexo = sexo;
        this->corOlhos = corOlhos;
        this->pai = pai;
        this->mae = mae;
    }
    Pessoa* geraPessoa(string nome, char sexo, Pessoa *pai){

        if(this->sexo != 'F'){
            cout << "Metodo so pode ser invocado por pessoas do sexo feminino!" << endl;
            return NULL;
        }else{
            if(pai->sexo != 'M'){
                cout << "Metodo so pode ser invocado com pai do sexo masculino!" << endl;
                return NULL;
            }
        }

        char corOlhos;

        if(this->corOlhos == 'C' || pai->corOlhos == 'C'){
            corOlhos = 'C';
        }else{
            if(this->corOlhos == 'V' || pai->corOlhos == 'V'){
                corOlhos = 'V';
            }else{
                corOlhos = 'A';
            }
        }


        Pessoa *filho = new Pessoa(nome, sexo, corOlhos, pai, this);
        return filho;
    }
    void setSexo(char sexo){
        sexo = toupper(sexo);
        if (sexo == 'M' || sexo == 'F') {
            this->sexo = sexo;
        }else{
            cout << "Sexo invalido!";
        }
    }
    void setCorOlhos(char corOlhos){
        corOlhos = toupper(corOlhos);
        if(corOlhos == 'C' || corOlhos == 'V' || corOlhos == 'A'){
            this->corOlhos = corOlhos;
        }else{
            cout << "Cor do olho invalida!";
        }
    }
    string getNome(){ return this->nome; };
    string getSexoStr(){
        char cSexo = toupper(this->sexo);
        string sexo;
        switch (cSexo) {
            case 77:
            sexo = "Masculino";
            break;
            case 70:
            sexo = "Feminino";
            break;
        }
        return sexo;
    };
    string getCorOlhosStr(){
        char corOlhos = toupper(this->corOlhos);
        string corOlhosStr;
        switch (corOlhos) {
            case 67:
            corOlhosStr = "Castanho";
            break;
            case 86:
            corOlhosStr = "Verde";
            break;
            case 65:
            corOlhosStr = "Azul";
            break;
        }
        return corOlhosStr;
    };
    void imprimeDados(){
        cout << "Nome: " << this->nome << endl;
        cout << "Sexo: " << getSexoStr() << endl;
        cout << "Cor do olho: " << getCorOlhosStr() << endl;
        if(this->pai == NULL){
            cout << "nome do pai: Desconhecido" << endl;
        }else{
            cout << "nome do pai: " << pai->getNome() << endl;
        }
        if(this->mae == NULL){
            cout << "Nome da mae: Desconhecido" << endl;
        }else{
            cout << "Nome da mae: " << mae->getNome() << endl;
        }
    }
};

int main(int argc, char const * argv[]) {

    Pessoa *pessoa1 = new Pessoa("Pedro", 'M', 'V');
    Pessoa *pessoa2 = new Pessoa("Patricia", 'F', 'C');
    Pessoa *filho1 = new Pessoa("Jorge", 'M', 'V', pessoa1, pessoa2);

    cout << "---------- Pai: ----------" << endl;
    pessoa1->imprimeDados();
    cout << "---------- Mae: ----------" << endl;
    pessoa2->imprimeDados();
    cout << "---------- Filho 1: ----------" << endl;
    filho1->imprimeDados();
    cout << "---------- Filho 2: ----------" << endl;
    Pessoa *filho2 = pessoa2->geraPessoa("Maria", 'F', pessoa1);
    filho2->imprimeDados();
    cout << "---------- Filho 3: ----------" << endl;
    Pessoa *filho3 = pessoa2->geraPessoa("Felipe", 'M', pessoa1);
    filho3->imprimeDados();

    return 0;
}
