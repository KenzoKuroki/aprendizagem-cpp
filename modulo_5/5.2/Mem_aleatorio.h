//
// Created by Lucas Kenzo Kuroki
//

#ifndef MEM_ALEATORIO_H
#define MEM_ALEATORIO_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <iomanip>
using std::setw;

#define TAMBUFFER 16

class Memoria {
    public:
      Memoria();
      ~Memoria();
      void selectComand();
    private:
      void gerarRaizAleatoria();
      void gerarMemoria(int *memoria);
      void imprimirMemoria();
      unsigned rangeRand (unsigned first, unsigned range);
      int memoria1[TAMBUFFER];
      int memoria2[TAMBUFFER];
};



#endif //MEM_ALEATORIO_H
