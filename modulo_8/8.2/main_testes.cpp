//
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::hex;
using std::oct;
using std::dec;
using std::fixed;

using std::ostream;

#include <iomanip>
using std::setbase;
using std::setprecision;
using std::setw;

ostream &tab(ostream &manip) {
  return manip << '\t';
}

int main(){
  int numero = 15;
  double num = 12.65742344;
  cout << hex;
  cout << "Numero: "<< numero << endl;

  cout << "-----------------\n";
  cout << fixed;
  cout << setprecision(5) << num << endl;
  cout << num << endl;
  cout.precision(3);
  cout << setw(8) << num << endl;

  cout << num << endl;
  cout << "-----------------\n";

  cout << "teste" << tab << "a2" << endl;
  return 0;
}
