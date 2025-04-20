// 9.3 - notas de aula
// Lucas Kenzo Kuroki
//

#include "Temperatura.hpp"


Temperatura::Temperatura(int regNum, float intTemp, float extTemp, char nivel):
_avgTemp(0.0)
{
  setRegNum(regNum);
  setIntTemp(intTemp);
  setExtTemp(extTemp);
  setNivel(nivel);

} //end construtor


void Temperatura::setRegNum(int regNum)
{
  _regNum = regNum;
}


int Temperatura::getRegNum() const
{
  return _regNum;
}


void Temperatura::setIntTemp(float intTemp)
{
  _intTemp = intTemp;
}


float Temperatura::getIntTemp() const
{
  return _intTemp;
}


void Temperatura::setExtTemp(float extTemp)
{
  _extTemp = extTemp;
}


float Temperatura::getExtTemp() const
{
  return _extTemp;
}


void Temperatura::setNivel(char nivel)
{
  _nivel = nivel;
}


char Temperatura::getNivel() const
{
  return _nivel;
}


void Temperatura::avgTemp(float intTemp, float extTemp)
{
  _avgTemp = (_intTemp+_extTemp)/2.0;
}

float Temperatura::getAvgTemp() const
{
  return _avgTemp;
}












