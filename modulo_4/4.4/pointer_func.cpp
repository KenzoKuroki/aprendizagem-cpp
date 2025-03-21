// 4.4 - aula de ponteiro de funcoes
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void func(int (*argFunc)(int), int val);
int somaDez(int valor);

int main() {
  func(somaDez, 10);

  return 0;
}

void func(int (*argFunc)(int), int val){
  cout << "Valor inteiro + 10: " << (*argFunc)(val) << endl;
}

int somaDez(int valor){
  return valor + 10;
}