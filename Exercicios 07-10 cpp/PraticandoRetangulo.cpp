#include <iostream>
using namespace std;

class Retangulo{
    float base, altura;
public:
    Retangulo() { }
    void setBase(float base) { this->base = base; }
    float getBase() { return this->base; }
    void setAltura(float altura) { this->altura = altura; }
    float getAltura() { return this->altura; }
    float area() { return this->base * this->altura; }
};

int main(){

    Retangulo r1;
    r1.setBase(10.0);
    r1.setAltura(8.5);
    cout << r1.getBase() << " X " << r1.getAltura() << " = " << r1.area() << endl;

    //maneira classica mais usada, dinamica
    Retangulo *r2 = new Retangulo();
    r2->setBase(12.5);
    r2->setAltura(7.8);
    cout << r2->getBase() << " X " << r2->getAltura() << " = " << r2->area() << endl;

    return 0;
}
