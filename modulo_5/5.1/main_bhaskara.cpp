// 5.1 - exercicio para implementar a função de segundo grau passando parametros na main
// Created by Lucas Kenzo Kuroki
//

#include "Bhaskara.h"

int main()
{
  Bhaskara calc1(1,-4,3),
           calc2(3,4,5),
           calc3(4,-8,15);

  calc1.solvesBhaskara();
  calc2.solvesBhaskara();
  calc3.solvesBhaskara();


  return 0;

}