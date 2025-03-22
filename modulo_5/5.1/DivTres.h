//
// Created by Lucas Kenzo Kuroki on 22/03/25.
//

#ifndef DIVTRES_H
#define DIVTRES_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

const int totalNumbers = 3;

class DivTres {
  public:
    DivTres();
    void getNumbers();
    void printNumbers();
  private:
    void numDivTres(int num[totalNumbers]);  //função utilitaria que retorna os numeros divisiveis por tres
    int numbers[totalNumbers];               //armazena os numeros
    char found[totalNumbers];                //Guarda N se não for divisivel e Y se for divisivel.
};



#endif //DIVTRES_H
