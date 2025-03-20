// 3.3 - Aula sobre funções recursivas
// Created by Lucas Kenzo Kuroki on 19/03/25.
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
unsigned long fatorial(unsigned long n);
void fact0to5();

//=============================================
//Função principal
//=============================================
int main()
{
  fact0to5();

  return 0;
}


//=============================================
// Desenvolvimento de funções
//=============================================
unsigned long fatorial(unsigned long n)
{
  if(n <= 1)
    return 1;
  else
    return n * fatorial(n - 1);
}

void fact0to5()
{
  static int reps = 0;

  cout << fatorial(reps) << endl;
  reps++;

  if (reps > 5) {
    reps = 0;
    return;
  }

  fact0to5();

}
