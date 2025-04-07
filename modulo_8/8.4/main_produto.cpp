// 8.4 - Projeto para criar uma funcao de produto limitada a 16bits
// Created by Lucas Kenzo Kuroki
//

#include "Produto.hpp"
int produto(int numA, int numB);

int main(){
  int numA=0, numB=0;
  int resultado = 0;
  while(true){
    cout << "Digite dois digitos para multiplicar:";
    cin >> numA >> numB;
    resultado = produto(numA, numB);
    cout << "Resultado dos produtos: " << resultado << endl;
  }

  cout << "\nFIM" << endl;
  return 0;
}

int produto(int numA, int numB){
  int res = numA * numB;
  if(res > 65535){
    throw Produto();
  }
  return res;
}// end produto entre numeros