// 1.5
// Created by Lucas Kenzo Kuroki
//
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "SalesScore2.h"

int main(){
  //criando dois objetos:

  SalesScore mystore1("Super hiper loja lalalaalal");
  SalesScore mystore2("Apenas uma loja");

  cout << "Loja 1, criada com sucesso: " << mystore1.getStoreTitle() << endl;
  cout << "\nLoja 2, criada com sucesso: " << mystore2.getStoreTitle() << endl;

  return 0;

}