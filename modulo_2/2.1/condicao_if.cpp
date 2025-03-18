// 2.1
// Created by Lucas Kenzo Kuroki.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
  int nota;
  cout << "Digite uma nota de 0 a 100: " << endl;
  cin >> nota;

  if (nota > 100)
    cout << "Entrada incorreta!" << endl;
  else if (nota >=90)
    cout << "Grau A" << endl;
  else if (nota >= 80)
    cout << "Grau B" << endl;
  else if (nota >= 70)
    cout << "Grau C" << endl;
  else if (nota < 70)
    cout << "Reprovado" << endl;
  else if (nota < 0)
    cout << "Entrada incorreta!" << endl;

  return 0;
}