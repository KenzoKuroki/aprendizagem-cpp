//
// Created by Lucas Kenzo Kuroki
//

#include "Vet3d.hpp"

//-----------------------------------------------
//Construtor
Vet3d::Vet3d(int x, int y, int z):
x(x), y(y), z(z)
{
}//end construtor

//-----------------------------------------------
//Sobrecarga do operador
Vet3d Vet3d::operator+(Vet3d P)
{
  x = x + P.x;
  y = y + P.y;
  z = z + P.z;

  return Vet3d(x, y, z);
}//end operator

//-----------------------------------------------
//Pega o x
int Vet3d::getX() const
{
  return x;
}//end getX

//-----------------------------------------------
//Pega o Y
int Vet3d::getY() const
{
  return y;
}//end getY

//-----------------------------------------------
//Pega o Z
int Vet3d::getZ() const
{
  return z;
}//end getZ
