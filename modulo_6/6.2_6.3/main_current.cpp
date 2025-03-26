//
// Created by Lucas Kenzo Kuroki
//

#include "sensCurrent.hpp"

int main(){
  sensCurrent sensor("Current", 850, 2, 5, 500);
  cout << fixed << setprecision(4);
  sensor.dispResults();

  sensor.setSensId(4);
  sensor.setValorADC(556);
  sensor.setSensType("Pressure");
  sensor.setVref(3.37);
  sensor.setRes(485);
  sensor.dispResults();
  return 0;
}