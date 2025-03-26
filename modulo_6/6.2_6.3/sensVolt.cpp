//
// Created by Lucas Kenzo Kuroki
//

#include "sensVolt.hpp"

//==========================================
sensVolt::sensVolt(const string &sensType, int valorADC, unsigned sensId , double Vref):
 _sensType(sensType), _valorADC(valorADC), _sensId(sensId), _Vref(Vref)
{
  cout << "Constructor sensVolt" << endl;
}//end construtor

sensVolt::~sensVolt(){
  cout << "Destructor sensVolt" << endl;
}//end destrutor

//==========================================

void sensVolt::setSensType(const string &sensType){
  _sensType = sensType;
}//end serSensType
//==========================================
string sensVolt::getSensType() const{

  return _sensType;
}//end getSensType
//==========================================
void sensVolt::setValorADC(int valorADC){
  _valorADC = (valorADC>=0&&valorADC<=1024)?valorADC:512;
}//end setValorADC
//==========================================
int sensVolt::getValorADC() const{
  return _valorADC;
}//end getValor ADC
//==========================================
void sensVolt::setSensId(unsigned sensId){
  _sensId = sensId;
}//end setSensId
//==========================================
unsigned sensVolt::getSensId() const{
  return _sensId;
}//end getSensId
//==========================================
void sensVolt::setVref(double Vref){
  _Vref = Vref;
}//end setVref
//==========================================
double sensVolt::getVref() const{
  return _Vref;
}//end getVref
//==========================================
double sensVolt::voltsVal() const{
  return getValorADC()*getVref()/static_cast <double> (1024);
}//end voltVal
//==========================================
void sensVolt::dispResults() const{
  cout << "\nTipo do Sensor: " << getSensType() << endl
        << "Valor ADC: " << getValorADC()  << 'V' << endl
        << "SensId: " << getSensId() << endl
        << "Vref: " << getVref() << 'V' << endl
        << "Voltage: " << voltsVal() << 'V' << endl;
}//end dispResults
//==========================================

