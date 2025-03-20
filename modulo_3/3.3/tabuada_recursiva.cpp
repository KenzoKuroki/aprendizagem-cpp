// 3.3 - Desenvolvimento de uma tabuada com função recursiva
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
// Prototipos de funções
//=============================================
void tabuada(int num);

//=============================================
// Função Principal
//=============================================
int main()
{

  int numero = 0;
  char flag = 's';

  do {
    cout << "Calcular a tabuada de: ";
    cin >> numero;

    tabuada(numero);

    cout << "Deseja continuar? [s/n] ";
    cin >> flag;

  }while(flag != 'n');

  cout << "Encerrando programa!!!" << endl;
  return 0;

}

//=============================================
// Desenvolvimento de funções
//=============================================
void tabuada(int num)
{
  static int reps = 0;
  if (reps <= 10){
    cout << num << " x " << reps << " = " << num * reps << endl;
    reps++;
    tabuada(num);
  }

  if (reps > 10) reps = 1;
}