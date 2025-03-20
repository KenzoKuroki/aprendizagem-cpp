// 3.4 - exercicio de ordenamento de vetor para decrescente e consulta de elementos de indice n
// Aula de vetores
// Created by Lucas Kenzo Kuroki
//
//inclui o header do decrescente
#include "decrescente.h"


//Função principal
int main()
{
  char comando;
  int index;

  Decrescente myVetor;
  myVetor.iniciarBusca();
  do{
    cout << "Informe o indice do elemento que deseja buscar: ";
    cin >> index;

    myVetor.buscarElemento(index);
    cout << "Deseja continuar? [s/n]: ";
    cin >> comando;
  }while(comando != 'n');

  return 0;
}
