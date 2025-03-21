//
// Created by Lucas Kenzo Kuroki
//


//==================================
//Bibliotecas
//==================================
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cmath>
using std::sqrt;
using std::pow;

//==================================
//Prototipos de funções
//==================================

int soma(int a, int b, char &sym);
int sub(int a, int b, char &sym);
int mult(int a, int b, char &sym);
double raiz(double a, char &sym);
double quadrado(double a, char &sym);
double cubo(double a, char &sym);
void calc(int (*operacao)(int, int, char &), int a, int b);
void calc(double (*operacao)(double, char&), double a);


//==================================
//Função principal
//==================================
int main()
{

  calc(soma, 10, 20);
  calc(sub, 10, 20);
  calc(mult, 10, 20);
  calc(raiz, 244.0);
  calc(quadrado, 256.0);


  return 0;

}//end main

//==================================
//Desenvolvimento de funções
//==================================
int soma(int a, int b, char &sym)
{
  sym = '+';
  return a + b;
}//end soma
//==================================

int sub(int a, int b, char &sym)
{
  sym = '-';
  return a - b;
}//end sub
//==================================

int mult(int a, int b, char &sym)
{
  sym = '*';
  return a * b;
}//end mult
//==================================

double raiz(double a, char &sym)
{
  sym = 'r';
  return sqrt(a);
}//end swrt
//==================================

double quadrado(double a, char &sym)
{
  sym = 'q';
  return pow(a,2.0);
}//end quadrado
//==================================

double cubo(double a, char &sym)
{
  sym = 'c';
  return pow(a, 3.0);
}//end cubo
//==================================

void calc(int (*operacao)(int, int, char &), int a, int b)
{
  char sym = ' ';
  int res = operacao(a, b, sym);
  cout << a << ' ' << sym << ' ' <<  b << " = " << res << endl;

}//end calc para inteiros

void calc(double (*operacao)(double, char &), double a) {
  char sym = ' ';
  double res = operacao(a, sym);
  if (sym == 'r')
    cout << "raiz quadrada de " << a << " = " << res << endl;
  else if (sym == 'q')
    cout << "quadrado de " << a << " = " << res << endl;
  else if (sym == 'c')
    cout << "cubo de " << a << " = " << res << endl;
}//end calc para double

