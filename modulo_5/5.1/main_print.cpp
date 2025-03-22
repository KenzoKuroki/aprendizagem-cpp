//
// Created by Lucas Kenzo Kuroki
//

#include "printVal.h"
int main(void)
{

  PrintVal Valor;              //declara objeto valor
  PrintVal *valorPtr = &Valor; //declara ponteiro para valor
  PrintVal &valorRef = Valor;//declara ref para valor

  Valor.setValue(4);
  Valor.printValue();

  valorRef.setValue(5);
  valorRef.printValue();

  valorPtr->setValue(8);
  valorPtr->printValue();

  cout <<"\nFIM" << endl;
  return 0;
}