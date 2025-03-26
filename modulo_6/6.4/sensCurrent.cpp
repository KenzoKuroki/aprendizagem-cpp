//
// Created by Lucas Kenzo Kuroki
//

#include "sensCurrent.hpp"

//==============================================================
sensCurrent::sensCurrent(const string &sensType, int valorADC, unsigned sensId , double Vref, double res):
sensVolt(sensType, valorADC, sensId, Vref)
{
  setRes(res);
  cout << "sensCurrent constructor" << endl;
}//end constructor

sensCurrent::~sensCurrent(){
  cout << "Destructor sensCurrent" << endl;
}

//==============================================================
void sensCurrent::setRes(double res){
  _res = res;
}//end setResistor

//==============================================================
double sensCurrent::getRes() const{
  return _res;
}//end get res

//==============================================================
double sensCurrent::currentVal() const{
  return sensVolt::voltsVal()/getRes()*1000;
}

//==============================================================
void sensCurrent::dispResults() const{
  sensVolt::dispResults();
  cout  << "Resistor: " << _res << endl
        << "Corrente: " << currentVal()  << "mA" << endl;
}//end dispResults
