// 7.2 - memoria de um processador de 40 bytes - usar templates de classes
// Created by Lucas Kenzo Kuroki on 28/03/25.
//

#ifndef MEMORIA_HPP
#define MEMORIA_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//--------------------------------------------------
//desenvolvendo a classe
template <typename myType, unsigned short N>
class Memoria {

  public:
    Memoria();
    void gravaDados();
    void imprimeDados();

  private:
    myType memoArray[N]; //memoria para o usuario
};//end class Memoria

#include "Memoria.cpp"

// //--------------------------------------------------
// //desenvolvimento das funções
// template <typename myType, unsigned short N>
// Memoria<myType, N>::Memoria()
// {
//   for (unsigned short i = 0; i < N; i++){
//     memoArray[i] = 0; //inicia a memoria
//   }
// }//end construtor
//
// template <typename myType, unsigned short N>
// void Memoria<myType, N>::gravaDados()
// {
//   for (unsigned short i = 0; i < N; i++){
//     cout <<  "Insira o novo dado " << i+1 << "/" << N << ": "<< endl;
//     cin >> memoArray[i];
//   }
// }//end gravaDados
//
// template <typename myType, unsigned short N>
// void Memoria<myType, N>::imprimeDados()
// {
//   for (unsigned short i = 0; i < N; i++){
//     cout << memoArray[i] << " ";
//   }
//   cout << endl;
// }//end imprime dados

#endif //MEMORIA_HPP
