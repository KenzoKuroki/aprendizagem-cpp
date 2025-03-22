// 5.1 - programa principal que interage com o usuario coletando digitos e retornando se sao divisiveis por 3 ou nao
// Created by Lucas Kenzo Kuroki
//

#include "Divtres.h"

int main(){

  DivTres calculator;

  calculator.getNumbers();
  calculator.printNumbers();

  cout << "\nFIM"<< endl;
  return 0;
}