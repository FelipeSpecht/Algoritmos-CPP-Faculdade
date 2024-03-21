#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

class ImpostoDeRenda{
    //Nome do contribuinte, ano de nascimento, profissão, escolaridade, renda mensal, número de dependentes
    string nomeContribuinte, profissao, escolaridade;
    int anoNascimento, qntDependentes;
    float rendaMensal;
public:
    //Deve possuir os métodos: Idade, renda anual, renda per capita mensal, alíquota IR máxima, alíquota IR efetiva, valor IR devido (respeitar as faixas) numerodedepndentes+1
    void setNome(string nome) { this->nomeContribuinte = nome; }
    string getNome() { return this->nomeContribuinte; }
    void setProfissao(string profissao) { this->profissao = profissao; }
    string getProfissao() { return this->profissao; }
    void setEscolaridade(string escolaridade) { this->escolaridade = escolaridade; }
    string getEscolaridade() { return this->escolaridade; }
    void setAnoNascimento(int anoNascimento) { this->anoNascimento = anoNascimento; }
    int getAnoNascimento() { return this->anoNascimento; }
    void setQntDependentes(int qntDependentes) { this->qntDependentes = qntDependentes; }
    int getQntDependentes() { return this->qntDependentes; }
    void setRendaMensal(float rendaMensal) { this->rendaMensal = rendaMensal; }
    float getRendaMensal() { return this->rendaMensal; }
    int getIdade() { return 2020 - this->anoNascimento; }
    float getRendaAnual() { return this->rendaMensal * 12; }
    float getRendaMensalPerCapita() { return this->rendaMensal / (this->qntDependentes+1); }
    float getAliquotaMaxima() {
        float aliquotaMaxima = 0;
        float rendaEfetiva = this->rendaMensal - (190.00*this->qntDependentes);
        if(rendaEfetiva > 1900 && rendaEfetiva <= 2820){
            aliquotaMaxima = 7.5;
        }else if(rendaEfetiva > 2820 && rendaEfetiva <= 3740){
            aliquotaMaxima = 15.0;
        }else if(rendaEfetiva > 3740 && rendaEfetiva <= 4660){
            aliquotaMaxima = 22.5;
        }else if(rendaEfetiva > 4660){
            aliquotaMaxima = 27.5;
        }
        return aliquotaMaxima;
    }
    float getAliquotaEfetiva(){
        float rendaEfetiva = this->rendaMensal - (190.00*this->qntDependentes);
        float calcRenda, aliquotaEfetiva = 0.0, aliquota1, aliquota2, aliquota3;

        if(rendaEfetiva > 1900 && rendaEfetiva <= 2820){
            calcRenda = rendaEfetiva - 1900;
            aliquotaEfetiva = (calcRenda * 7.5) / 100;
            aliquotaEfetiva = (aliquotaEfetiva * 100) / rendaEfetiva;
        }else if(rendaEfetiva > 2820 && rendaEfetiva <= 3740){
            calcRenda = rendaEfetiva - 2820;
            aliquotaEfetiva = (calcRenda * 15) / 100;
            aliquotaEfetiva = (aliquotaEfetiva * 100) / rendaEfetiva;
            calcRenda = 920;
            aliquota1 = (calcRenda * 7.5) / 100;
            aliquota1 = (aliquota1 * 100) / rendaEfetiva;
            aliquotaEfetiva = aliquotaEfetiva + aliquota1;
        }else if(rendaEfetiva > 3740 && rendaEfetiva <= 4660){
            calcRenda = rendaEfetiva - 3740;
            aliquotaEfetiva = (calcRenda * 22.5) / 100;
            aliquotaEfetiva = (aliquotaEfetiva * 100) / rendaEfetiva;
            calcRenda = 920;
            aliquota1 = (calcRenda * 15) / 100;
            aliquota1 = (aliquota1 * 100) / rendaEfetiva;

            aliquota2 = (calcRenda * 7.5) / 100;
            aliquota2 = (aliquota1 * 100) / rendaEfetiva;
            aliquotaEfetiva = aliquotaEfetiva + aliquota1 + aliquota2;
        }else if(rendaEfetiva > 4660){
            calcRenda = rendaEfetiva - 4660;
            aliquotaEfetiva = (calcRenda * 27.5) / 100;
            aliquotaEfetiva = (aliquotaEfetiva * 100) / rendaEfetiva;
            calcRenda = 920;
            aliquota3 = (calcRenda * 22.5) / 100;
            aliquota3 = (aliquota3 * 100) / rendaEfetiva;

            aliquota2 = (calcRenda * 15) / 100;
            aliquota2 = (aliquota2 * 100) / rendaEfetiva;

            aliquota1 = (calcRenda * 7.5) / 100;
            aliquota1 = (aliquota1 * 100) / rendaEfetiva;
            aliquotaEfetiva = aliquotaEfetiva + aliquota1 + aliquota2 + aliquota3;
        }

        return aliquotaEfetiva;
    }
    float getValorIR() {
        float rendaEfetiva = this->rendaMensal - (190.00*this->qntDependentes);
        float valorIR = (rendaEfetiva * getAliquotaEfetiva()) / 100;

        return valorIR;
    }

};

int main(int argc, char const * argv[]) {

    string nome, profissao, escolaridade;
    int anoNascimento, qntDependentes;
    float rendaMensal;

    cout << "Qual seu nome? ";
    getline(cin, nome);
    cout << "Qual sua profissao? ";
    getline(cin, profissao);
    cout << "Qual a sua escolaridade? ";
    getline(cin, escolaridade);
    cout << "Qual o seu ano de nascimento? ";
    cin >> anoNascimento;
    cout << "Digite a quantidade de dependentes: ";
    cin >> qntDependentes;
    cout << "Digite a sua renda mensal: ";
    cin >> rendaMensal;

    ImpostoDeRenda *imp1 = new ImpostoDeRenda();
    imp1->setNome(nome);
    imp1->setProfissao(profissao);
    imp1->setEscolaridade(escolaridade);
    imp1->setAnoNascimento(anoNascimento);
    imp1->setQntDependentes(qntDependentes);
    imp1->setRendaMensal(rendaMensal);

    system("cls");
    cout << "Nome = " << nome << endl << "Profissao = " << profissao << endl << "Escolaridade = " << escolaridade << endl << "Idade = " << imp1->getIdade() << endl << "Quantidade de dependentes = " << qntDependentes << endl << "Renda Mensal = R$" << rendaMensal;
    printf("\nRenda anual = R$%.2f\nRenda mensal per capita = R$%.2f\nAliquota maxima = %.1f %%\nAliquota efetiva = %.2f %%\nValor IR = R$%.2f", imp1->getRendaAnual(), imp1->getRendaMensalPerCapita(), imp1->getAliquotaMaxima(), imp1->getAliquotaEfetiva(), imp1->getValorIR());

    return 0;
}
