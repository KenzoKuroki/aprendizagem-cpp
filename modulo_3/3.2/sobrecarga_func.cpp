// 3.2 - Testando a sobrecarga de funções
// funções de mesmo nome podem ser diferenciadas pela sua assinatura(parâmetros)
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
int soma(int a, int b);
int soma(short a, short b, short c);
void soma(int a, int b, int &res);
int func1(double a, int b);
int func1(int a, double b);

//=============================================
//função principal
//=============================================
int main()
{
  int a = 0;
  cout << "variavel a(antes): " << a << endl;

  soma(1, 2, a);
  cout << "variavel a(depois): " << a << endl;

  return 0;

}

//=============================================
// Desenvolvimento de funções
//=============================================
int soma(int a, int b)
{
  return a + b;
}

int soma(short a, short b, short c)
{
  return a + b + c;
}

void soma(int a, int b, int &res)
{
  res = a + b;
}

int func1(double a, int b)
{
  return 0;
}
int func1(int a, double b)
{
  return 0;
}