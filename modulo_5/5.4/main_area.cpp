// 5.4 - exercicio para permitir o uso de funções em cascata
// Visa coletar o diametro, a altura de um quadrado e o diametro de um circulo circunscrito nesse quadrado
// E retorna a area desta figura, ou seja, area do quadrado - metade da area do circulo
// Created by Lucas Kenzo Kuroki
//

#include "Area.h"

int main(){
  Area myArea;

  myArea.setDiametro(19.0).setBaseAltura(26.5, 19.0);
  myArea.calcArea();
  myArea.printArea();

  cout << "FIM" << endl;
  return 0;
}