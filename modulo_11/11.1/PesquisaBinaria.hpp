//
// Created by Lucas Kenzo Kuroki
//

#ifndef PESQUISABINARIA_HPP
#define PESQUISABINARIA_HPP

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

#include <iomanip>
using std::setw;

class PesquisaBinaria {
    public:
      PesquisaBinaria(int sizeVector);
      int pesquisa(int chave) const;
      void imprimeVetor() const;
    private:
        int _sizeVector;
        vector<int> dados;
        int numComparador;
};



#endif //PESQUISABINARIA_HPP
