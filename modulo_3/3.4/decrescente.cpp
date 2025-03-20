// 3.4 - Implementa as funções da classe decrescente - visa manipular com vetores
// Created by Lucas Kenzo Kuroki
//

//Incluindo biblioteca decrescente
#include "decrescente.h"

//Implementação das funções-membro da classe Descrescente
Decrescente::Decrescente()
{
    cout << "Bem vindo, por favor insira 5 valores:" << endl;
    gerarVetor();
    gerarDecrescente();
}// end construtor

void Decrescente::gerarVetor()
{
  for (int i = 0; i < 5; i++){
      cout << "Insira o " << " elemento[ " << i << " ]: ";
      cin >> vetor[i];
  }
  cout << endl;
  cout << "Vetor original: " << endl;
  imprimirVetor();
}// end gerarVetor

void Decrescente::gerarDecrescente()
{
  int temp;
  for (int i = 0; i < 5; i++)
  {
    for (int j = i; j < 5; j++)
    {
        if(vetor[i] < vetor[j])
        {
          temp = vetor[i];
          vetor[i] = vetor[j];
          vetor[j] = temp;
        }// end if
    }// end for com j - interno
  }//end for com i - externo
  cout << "Vetor Decrescente: " << endl;
  imprimirVetor();
}// end gerarDecrescente

void Decrescente::imprimirVetor()
{
  for (int i = 0; i < 5; i++){
     cout << vetor[i] << " ";
  }
  cout << endl;
}// end imprimirVetor

void Decrescente::iniciarBusca(){
  cout << "Iniciando a busca por elementos no vetor..." << endl;
}

void Decrescente::buscarElemento(int indice)
{
  if(indice < 5 && indice >= 0)
    cout << "Elemento da posicao " << indice << ": "<< vetor[indice] << endl;
  else if(indice >= 5)
    cout << "Indice invalido, esta acima do esperado" << endl;
  else
    cout << "Indice invalido, esta abaixo do esperado" << endl;
}// end buscarElemento