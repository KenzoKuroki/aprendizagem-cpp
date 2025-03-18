// 2.2 - implementação de funções da classe numGenerator
// Objetivo é criar um programa que receba 6 numeros e calcule:
// soma, sub e multiplicacao
// Created by Lucas Kenzo Kuroki
//

#include "condica_whille.h"

numGenerator::numGenerator()
{
  cout << "Iniciando o programa..." << endl;
  getNumber();

}//end numGenerator

void numGenerator::getNumber()
{
  int counter = 0;
  cout << "Digite 6(seis) numeros: " << endl;

  while(counter < 6) //pega os n numeros
  {
    cout << "Digite o numero " << counter + 1 << ": ";
    cin >> vetor[counter];
    counter++;
    cout << endl;
  }

}//end getNumber

int numGenerator::somaNumeros(int numA, int numB)
{
  return numA + numB;
}//end somaNumeros

int numGenerator::subNumeros(int numA, int numB)
{
  return numA - numB;
}//end subNumeros

int numGenerator::multiplicaNumeros(int numA, int numB)
{
  return numA * numB;
}//end multiplicaNumeros

void numGenerator::imprimeNumeros()
{
  cout << "Calculos: " << endl;
  cout << "Soma: " << vetor[0] << " + " << vetor[1] << " = " << somaNumeros(vetor[0], vetor[1]) << endl;
  cout << "Sub: " << vetor[2] << " - " << vetor[3] << " = " << subNumeros(vetor[2], vetor[3]) << endl;
  cout << "Multiplica: " << vetor[4] << " * " << vetor[5] << " = " << multiplicaNumeros(vetor[4], vetor[5]) << endl;
  cout << "Calculos efetuados com sucesso! " << endl;
}