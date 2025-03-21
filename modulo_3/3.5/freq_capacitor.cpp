// 3.5 - exercicio para calcular a frequencia de um circuito com capacitor e indutor
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
using std::sqrt;
#include <iomanip>
using std::setw;

//Prototipos de funções:
void geraMatriz(double M[5][3]);
double freqCapacitor(double capacitor, double indutor);
void imprimeMatriz(double M[5][3]);

int main()
{
    double M[5][3];

    geraMatriz(M);
    imprimeMatriz(M);

    return 0;
}

void geraMatriz(double M[5][3])
{
    M[0][0] = 1E-9;
    M[1][0] = 10E-9;
    M[2][0] = 47E-9;
    M[3][0] = 100E-9;
    M[4][0] = 1E-6;

    M[0][1] = 200E-6;
    M[1][1] = 200E-6;
    M[2][1] = 200E-6;
    M[3][1] = 200E-6;
    M[4][1] = 200E-6;

    M[0][2] = freqCapacitor(M[0][0], M[0][1]);
    M[1][2] = freqCapacitor(M[1][0], M[1][1]);
    M[2][2] = freqCapacitor(M[2][0], M[2][1]);
    M[3][2] = freqCapacitor(M[3][0], M[3][1]);
    M[4][2] = freqCapacitor(M[4][0], M[4][1]);

}//end geraMatriz
double freqCapacitor(double capacitor, double indutor)
{
  return 1/(2*M_PI*sqrt(capacitor*indutor));
}

void imprimeMatriz(double M[5][3])
{
  cout << "|"<< setw(8) << "C(F) " << " |"
       << setw(8) << "L(H) " << " |"
       << setw(8) << "F(Hz)" << " |" << endl;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 3; j++){
      if (j==0) cout << "|";
      cout << setw(8)<< M[i][j] << " |";
    }
    cout << endl;
  }
}