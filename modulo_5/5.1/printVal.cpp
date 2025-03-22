//
// Created by Lucas Kenzo Kuroki.
//

#include "printVal.h"

PrintVal::PrintVal(){
  valueToPrint = 0;
}

void PrintVal::setValue(int value){
  valueToPrint = value;
}

void PrintVal::printValue(){
  cout << "Valor Recebido: " << valueToPrint << endl;
}