// 2.3 - Define a classe equação
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;

class Equacao {
    public:
      Equacao(int a, int b);                         //construtor - inicia a equação da reta
      int calculaY(int x);                           //função-membro que calcula o valor de y para um determinado x
      void imprimeEquacao(int initX, int finalX);    //função-membro que imprime os valores de y para um determinado intervalo

    private:
      int numA; //coeficiente angular
      int numB; //coeficiente linear
};
