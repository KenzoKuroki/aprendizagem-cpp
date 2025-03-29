//
// Created by Lucas Kenzo Kuroki
//

#ifndef ESCALAR_HPP
#define ESCALAR_HPP

#include <iostream>
using std::cout;
using std::endl;

class Escalar {
    public:
      Escalar(double =0.0,double =0.0,double =0.0);
      Escalar operator*(double k);

      void imprime() const;
    private:
      double _x;
      double _y;
      double _z;
};



#endif //ESCALAR_HPP
