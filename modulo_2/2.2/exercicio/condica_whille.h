// 2.2 - calculos de numeros inteiros fornecidos pelo usuario
// arquivo header que contem a classe numGenerator
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


class numGenerator {
  public:
    numGenerator();                            //construtor, inicia com a mensagem
    void getNumber();                          //função-membro que pega os numeros do user
    void imprimeNumeros();                     //funco-membro que imprime os numeros
    int somaNumeros(int numA, int numB);       //função-membro que soma dois numeros
    int subNumeros(int numA, int numB);        //função-membro que subtrai dois numeros
    int multiplicaNumeros(int numA, int numB); //função-membro que multiplica dois numeros

  private:
    int vetor[6];
};

