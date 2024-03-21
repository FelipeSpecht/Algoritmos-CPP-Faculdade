#include <iostream>
using namespace std;

int main() {
  cout << "C++!" << endl;
  cout << "C++! | ";
  printf("C++!\n");

  string nome;
  int idade;
  float altura;

  cout << "Qual seu nome? ";
  //cin >> nome;
  getline(cin, nome);
  cout << "Qual sua idade?" << endl;
  cin >> idade;
  cout << "Qual sua altura?" << endl;
  cin >> altura;

  idade = 20;

  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
  cout << "Altura: " << altura << endl;



  return 0;
}
