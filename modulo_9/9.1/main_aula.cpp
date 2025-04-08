//
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::endl;
using std::cin;
using std::cout;
using std::ios;
using std::cerr;
using std::fixed;

#include <cstdlib>
using std::exit;

#include <fstream>
using std::ofstream;

#include <iomanip>
using std::setprecision;

int main(){
  // ofstream Arq("teste.txt", ios::out);
  // if(!Arq){
  //   cerr << "Error opening file" << 15.234 << endl;
  //   exit(1);
  // }
  //
  // Arq << "Curso de c++, aprendendo o basico da linguagem" << endl;
  // Arq.close();


  ofstream Freq("Frequencia.txt", ios::out);
  if(!Freq){
    cerr << "Error opening file" << 15.234 << endl;
    exit(1);
  }
  double R = 15000.0, C = 100.0E-9;
  double f = 1/(2*3.1415*R*C);
  Freq << fixed;
  Freq << setprecision(5) << f << "Hz" << endl;


  Freq.close();

  return 0;
}