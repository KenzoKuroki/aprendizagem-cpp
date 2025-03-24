// 5.4 - classe hipotenusa
// Created by Lucas Kenzo Kuroki
//

#ifndef HIPOCALC_H
#define HIPOCALC_H

//==========================================================
//bibliotecas
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::sqrt;

//==========================================================
//classe:
class HipoCalc {
public:
    HipoCalc(double = 3.0, double = 4.0);
    void triRect() const;
private:
    double pitagoras(double, double);
    double hipo;
    double _ca;
    double _cb;
};

//==========================================================
// Função membro da classe

HipoCalc::HipoCalc(double ca, double cb):
 _ca(ca), _cb(cb)
{
    hipo = pitagoras(_ca, _cb);
}

double HipoCalc::pitagoras(double ca, double cb){
    return sqrt(ca*ca + cb*cb);
}

void HipoCalc::triRect() const
{
    cout << "        hipo= " << hipo << endl;
    cout << "  this->hipo= " << this->hipo << endl;
    cout << "(*this).hipo= " << (*this).hipo << endl;
}


//===========================================
//função principal
int main(){
  HipoCalc calc(8.0,18.2);
  calc.triRect();
  cout << "\nFIM" << endl;
  return 0;
}

#endif //HIPOCALC_H

