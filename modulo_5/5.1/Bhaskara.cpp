//
// Created by Lucas Kenzo Kuroki on 22/03/25.
//

#include "Bhaskara.h"

Bhaskara::Bhaskara(double a, double b, double c){
  setParameters(a,b,c);
}

void Bhaskara::setParameters(double a, double b, double c){
  char cmd;
  cout << "Voce deseja usar os valores pré-definidos? (y) - sim, (n) - nao. >>> ";
  cin >> cmd;

  if(cmd == 'n'){
    cout << "Entre com os valores de a. b e c: "
         << "\n>>> ";
         cin >> A;
         cin >> B;
         cin >> C;
  }else if(cmd == 'y'){
    A = a;
    B = b;
    C = c;
  }else
    cout << "Comando invalido, apenas y ou n" << endl;
}//end setParameters

void Bhaskara::genEquation(){
  cout << "==============================" << endl;
  cout << "Equação: " << endl;
  cout << setw(5) << A << "xx"
               << ((B>0)? " +" : " ") << B << 'x'
               << ((C>0)? " +" : " ") << C << " = 0"
               << endl;
}//end genEquation

void Bhaskara::solvesBhaskara(){
  genEquation();
  cout << "\nResposta: " << endl;

  double discriminante = pow(B,2)-4*A*C;
  if(discriminante<0){
    cout << "Equação com soluções complexas" << endl;
  }
  else{
    double x1=(-B+sqrt(discriminante))/(2*A);
    double x2=(-B-sqrt(discriminante))/(2*A);

    cout << '\t' << setw(5) << "x1 = " << x1 << endl
         << '\t' << setw(5) << "x2 = " << x2 << endl
         << "==============================" << endl;
  }
}