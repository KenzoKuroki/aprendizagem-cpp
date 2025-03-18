// 2.4 - Criação da classe calculadora
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <math.h>
using std::pow;

class Calculadora {
    public:
      void bootSystem();                                     //função-membro inicializa o sistema
      void exibeMenu();                                      //função-membro exibe o menu na tela
      void getNumeros();                                     //função-membro pega os numeros do usuario
      void getOperacao();                                    //função-membro pega a operacao do usuario
      void imprimeOperacoes();                               //função-membro imprime a operacao
      double calcular(char op, double numA, double numB);    //função-membro retorna calculos com base na operacao selecionada
      void exibeResultado();                                 //função-membro exibe o resultado
      int getContinue();                                     //função-membro verifica se usuario deseja continuar


    private:
      double numeroA;
      double numeroB;
      char operacao;
      int flag;
};



