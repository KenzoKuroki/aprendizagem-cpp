//
// Created by Lucas Kenzo Kuroki
//

#include "sensCurrent.hpp"


int main(){
  sensVolt sensorA("Tensão", 521, 1, 3.3);
  sensVolt *sensorAptr = 0;

  sensCurrent sensorB("Corrente", 421, 2, 5.0, 10000.0);
  sensCurrent *sensorBptr = 0;
  cout << fixed << setprecision(4);

  sensorAptr = &sensorA;
  sensorAptr->dispResults();

  sensorBptr = &sensorB;
  sensorBptr->dispResults();

  sensorAptr = &sensorB;
  sensorAptr->dispResults();

  return 0;
}