// 6.1 - arquivo para testar a classe de sensVolt
// Created by Lucas Kenzo Kuroki
//
//==========================================
//==========================================
#include "sensVolt.hpp"

//==========================================
//==========================================
int main(){
  sensVolt sensor("Voltage", 267, 1, 5.0);
  cout << fixed << setprecision(4);
  cout << "Configuracoes iniciais: " << endl;
  sensor.dispResults();

  cout << "Novas Configuracoes: " << endl;
  sensor.setSensId(4);
  sensor.setValorADC(746);
  sensor.setSensType("Pressure");
  sensor.setVref(3.3);
  sensor.dispResults();

  return 0;
}