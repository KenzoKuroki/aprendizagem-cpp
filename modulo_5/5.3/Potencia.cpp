//
// Created by Lucas Kenzo Kuroki
//

#include "Potencia.h"

Potencia::Potencia():
potencia(0)
{

}

void Potencia::printPot(){
  cout << "Potencia: " << potencia << 'W' << endl;
}

void potVal(Potencia &calcPot, int volt, int current){
  calcPot.potencia = volt * current;
}
