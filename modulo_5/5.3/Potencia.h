//
// Created by Lucas Kenzo Kuroki
//

#ifndef EXE_POT_H
#define EXE_POT_H

#include <iostream>
using std::cout;
using std::endl;

class Potencia{
    friend void potVal(Potencia &, int, int);
    public:
        Potencia();
        void printPot();

    private:
      int potencia;
};

void potVal(Potencia &calcPot, int volt, int current);

#endif //EXE_POT_H
