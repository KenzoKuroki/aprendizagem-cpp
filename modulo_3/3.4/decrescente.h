// 3.4 -
// Created by Lucas Kenzo Kuroki
//

//Bibliotecas utilizadas
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//Classe que carrega os prototipos das funções de manipulação com vetor decrescente
class Decrescente {
    public:
      Decrescente();                        //construtor
      void gerarVetor();                    //função-membro que gera o vetor inicial
      void gerarDecrescente();              //função-membro que gera o vetor decrescente
      void imprimirVetor();                 //função-membro que imprime um vetor qualquer
      void iniciarBusca();                  //função-membro que inicia a operação da busca com mensagem
      void buscarElemento(int indice);      //função-membro que busca o elemento de indice passado por parametro
    private:
      int vetor[4];                         //vetor utilizado e manipulado pelas funções
};



