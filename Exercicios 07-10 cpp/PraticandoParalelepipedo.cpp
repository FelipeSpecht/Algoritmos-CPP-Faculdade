#include <iostream>
using namespace std;

class Paralelepipedo{
    float base, altura, profundidade;
public:
    void setBase(float base) { this->base = base; }
    float getBase() { return this->base; }
    void setAltura(float altura) { this->altura = altura; }
    float getAltura() { return this->altura; }
    void setProfundidade(float profundidade) { this->profundidade = profundidade; }
    float getProfundidade() { return this->profundidade; }
    float volume() { return this->base * this->altura * this->profundidade; }
};

int main(){

    Paralelepipedo p1;
    p1.setBase(10.0);
    p1.setAltura(7.5);
    p1.setProfundidade(4.6);

    cout << p1.getBase() << " x " << p1.getAltura() << " x " << p1.getProfundidade() << " = " << p1.volume() << endl;

    return 0;
}
