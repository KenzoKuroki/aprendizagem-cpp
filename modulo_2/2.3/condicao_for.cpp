// 2.3 - cria as funções da classe da equação da reta
// acessa os coeficientes privados pelo construtor, usa um for para calcular y e imprime valores
// Created by Lucas Kenzo Kuroki
//

#include "condicao_for.h"

Equacao::Equacao(int a, int b)
{
  cout << "Equação da Reta: y = " << a << "x - " << b << endl;
  numA = a;
  numB = b;
}

int Equacao::calculaY(int x)
{
    return numA * x - numB;
}

void Equacao::imprimeEquacao(int initial, int final)
{
    cout << "    x    |    y    "<< endl;
    for (int i = initial; i <= final; i++)
    {
        cout << "    " << i << "    |    " << calculaY(i) << endl;
    }
}