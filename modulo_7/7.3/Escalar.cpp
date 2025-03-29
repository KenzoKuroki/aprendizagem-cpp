//
// Created by Lucas Kenzo Kuroki
//

#include "Escalar.hpp"

Escalar::Escalar(double x, double y, double z):
 _x(x), _y(y), _z(z)
{
}

Escalar Escalar::operator*(double k)
{
  _x = _x*k;
  _y = _y*k;
  _z = _z*k;
  return Escalar(_x,_y,_z);
}

void Escalar::imprime() const{
  cout << "k * P = ("
       << _x << ',' << _y << ',' << _z << ')' << endl;
}
