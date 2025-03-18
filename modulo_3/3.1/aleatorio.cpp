// 3.1 - aula de funções
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <iomanip>
using std::setw;

//Prototipo de funções:
void randomNumbers (int numbers, int inicial, int final, int coluna, int &somatorio) ;
inline unsigned rangeRand (unsigned first, unsigned range) ;
int somaNumeros (int valor, int flagSoma);

int main()
{

  char opt;
  int num;
  int initial, final;
  int coluna;
  int somatorio = 0;

  do
  {
    cout << "Sortear quantos numeros: " << endl;
    cin >> num;
    cout << "Qual a faixa de sorteio? " <<  endl;
    cin >> initial >> final;
    cout << "Organizar em quantas colunas?" << endl;
    cin >> coluna;
    cout << endl;

    srand(time(0));
    randomNumbers(num, initial, final, coluna, somatorio);

    cout << "\nSomatorio dos numeros: " << somatorio << endl;

    cout << "\nDeseja continuar? [s/n] ";
    cin >> opt;


    somaNumeros(0, 1);

  }while(opt != 'n');

  cout << "\nPrograma encerrado."<< endl;
  return 0;
}

void randomNumbers (int numbers, int inicial, int final, int coluna, int &somatorio)
{
  for(int i = 0; i < numbers; i++)
  {
    int numAleatorio = rangeRand(inicial,final);
    cout << setw(5) << numAleatorio;
    if(i%coluna == 0)
      cout << endl;

    somatorio = somaNumeros(numAleatorio, 0);
  }//end for

}//end randomNumbers

inline unsigned rangeRand (unsigned first, unsigned range)
{
  return first + (rand()%(range + 1 - first));
}

int somaNumeros (int valor, int flagSoma)
{
  static int soma = 0;

  if(flagSoma) {
    soma = 0;
    return 0;
  }//end if
  else {
    soma += valor;
    return soma;
  }// end else
}