// 3.4
// Created by Lucas Kenzo Kuroki
//

#include "SalesScore2.h"

int main(){
  int salesArray[SalesScore::products] = {10, 155, 205, 355, 450, 571, 650, 750, 853, 1000};
  SalesScore mySales("Super hiper loja", salesArray);
  mySales.bootSystem();
  mySales.processSales();

  return 0;

}