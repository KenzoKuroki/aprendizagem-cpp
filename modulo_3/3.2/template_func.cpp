// 3.2 - template functions
// Created by Lucas Kenzo Kuroki
//
//=============================================
//Bibliotecas
//=============================================
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//=============================================
//Prototipos de funções
//=============================================
template <typename LK>
LK minimo(LK a, LK b, LK c);

template <typename LK, typename WR>
WR minimo(LK a, LK b, WR c);

int main()
{

  cout << minimo(1, 2, 3) << endl;
  cout << minimo(1575.2, 222.1, 3000.80) << endl;
  cout << minimo('f', 't', 'b') << endl;
  cout << minimo('f', 't', 10) << endl;

  return 0;

}

//=============================================
// Desenvolvimento de funções
//=============================================
template <typename LK>
LK minimo(LK a, LK b, LK c)
{
  LK menor = a;
  if(b < menor)
    menor = b;
  if(c < menor)
    menor = c;

  return menor;
}

template <typename LK, typename WR>
WR minimo(LK a, LK b, WR c)
{
  LK menor = a;
  if(b < menor)
    menor = b;
  if(c < menor)
    menor = c;

  return menor;
}