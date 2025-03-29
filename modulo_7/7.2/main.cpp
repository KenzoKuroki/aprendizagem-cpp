//
// Created by Lucas Kenzo Kuroki
//

#include "Memoria.hpp"

int main()
{
  Memoria<uint16_t, 6> m1;
  Memoria<uint32_t, 3> m2;
  m1.gravaDados();
  m1.imprimeDados();
  m2.gravaDados();
  m2.imprimeDados();
  return 0;
}