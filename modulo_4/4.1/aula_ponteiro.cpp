// 4.1 - aula de ponteiros
// Created by Lucas Kenzo Kuroki
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void atualizaRef(int &update);
void atualizaComPtr(int *update);

int main()
{
  int var = 42;
  int *ptr;

  int valor = 15;

  ptr = &var;
  cout << "   Endereço var: " << &var << endl;
  cout << "            ptr: " << ptr << endl;
  cout << "Endereço de ptr: " << &ptr << endl;
  cout << "   Valor de ptr: " << *ptr << endl;
  cout << "   Valor de var: " << var << endl;

  *ptr = 100;
  cout << "   Valor de var: " << var << endl;

  // cout << "Digite um valor: ";
  // cin >> *ptr;
  // cout << "   Valor de var: " << var << endl;

  cout << "=============================================" << endl;
  cout << "      Valor antes: " << valor << endl;
  atualizaRef(valor);
  cout << "Valor depois(REF): " << valor << endl;

  cout << "      Valor antes: " << valor << endl;
  atualizaComPtr(&valor);
  cout << "Valor depois(PTR): " << valor << endl;



  return 0;
}

void atualizaRef(int &update)
{
  update += 100;
}

void atualizaComPtr(int *update) {
  *update += 5000;
}
