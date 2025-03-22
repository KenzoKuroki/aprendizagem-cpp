// 5.1 - implementação de funções da classe divTres, objetivo é verificar quais numeros digitados pelo usuario sao
// divisiveis por tres
// Created by Lucas Kenzo Kuroki
//

#include "DivTres.h"

DivTres::DivTres(){
    for(int i = 0; i < totalNumbers; i++){
      numbers[i] = 0;
      found[i] = '0';
    }// end for
}//end SivTres

void DivTres::getNumbers()
{

  for(int i = 0; i < totalNumbers; i++){
    cout << "Digite o numero: " << i+1 << "/" << totalNumbers << ": ";
    cin >> numbers[i];
  }//end for

  numDivTres(numbers);
}//end getNumbers

void DivTres::printNumbers()
{
  cout << "Os numeros com \'Y\' sao divisiveis por 3" << endl;
  for(int i = 0; i < totalNumbers; i++){
    cout << setw(4) << numbers[i] << " " << found[i]
         << ((i+1)%2==0? '\n':'\t');
  }
}
void DivTres::numDivTres(int num[totalNumbers])
{
  for(int i = 0; i < totalNumbers; i++){
    if(num[i]%3 == 0)
      found[i] = 'Y';
    else
      found[i] = 'N';

  }//end for
}// end numdivTres
