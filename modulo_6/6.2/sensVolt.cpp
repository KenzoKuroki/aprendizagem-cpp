//
// Created by Lucas Kenzo Kuroki
//

#include "sensVolt.hpp"

//==========================================
sensVolt::sensVolt(const string &sensType, int valorADC, unsigned sensId , double Vref){

  _sensType = sensType;
  _valorADC = valorADC;
  _sensId = sensId;
  _Vref = Vref;
}//end construtor
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
  return _valorADC*_Vref/static_cast <double> (1024);
}//end voltVal
//==========================================
void sensVolt::dispResults() const{
  cout << "Tipo do Sensor: " << _sensType << endl
        << "Valor ADC: " << _valorADC  << "V" << endl
        << "SensId: " << _sensId << endl
        << "Vref: " << _Vref << "V" << endl
        << "Voltage: " << voltsVal() << "V" << endl;
}//end dispResults
//==========================================

