//
// Created by Lucas Kenzo Kuroki
//

#include "Pot.hpp"


//construtor
Pot::Pot(int base):
 _base(base)
{
}

//sobrecarga do operador ^ para potencia
int Pot::operator^(int val){
  return pow(_base,val);
}

//funcao para definir base
void Pot::setBase(int base){
  _base = base;
}