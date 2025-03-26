//
// Created by Lucas Kenzo Kuroki
//

#include "sensCurrent.hpp"

int main(){
  sensCurrent sensor("Current", 850, 2, 5, 500);
  cout << fixed << setprecision(4);
  sensor.dispResults();

  return 0;
}