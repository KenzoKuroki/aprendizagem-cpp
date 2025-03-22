// 5.1 - Classe para implementar a função de segundo grau
// Created by Lucas Kenzo Kuroki
//

#ifndef BHASKARA_H
#define BHASKARA_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cmath>
using std::pow;
using std::sqrt;

class Bhaskara {
    public:
      Bhaskara(double =0, double= 0, double= 0);
      void solvesBhaskara();
    private:
      void setParameters(double a, double b, double c);
      void genEquation();
      int A;
      int B;
      int C;

};



#endif //BHASKARA_H
