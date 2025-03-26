//
// Created by Lucas Kenzo Kuroki
//

#include "sensCurrent.hpp"

//==============================================================
sensCurrent::sensCurrent(const string &sensType, int valorADC, unsigned sensId , double Vref, double res):
sensVolt(sensType, valorADC, sensId, Vref)
{
  _res = res;
}//end constructor

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
  double voltage = voltsVal();
  return voltage/_res*1000;
}

//==============================================================
void sensCurrent::dispResults() const{
  cout << "Tipo do Sensor: " << _sensType << endl
        << "Valor ADC: " << _valorADC  << "V" << endl
        << "SensId: " << _sensId << endl
        << "Vref: " << _Vref  << "V" << endl
        << "Resistor: " << _res << endl
        << "Voltage: " << voltsVal()  << "V" << endl
        << "Corrente: " << currentVal()  << "mA" << endl;
}//end dispResults
