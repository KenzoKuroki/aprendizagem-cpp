//
// Created by Lucas Kenzo Kuroki
//

#include "Sensor.h"

int Sensor::_level = 0;

Sensor::Sensor(int level)
{
_level = level;
}//end construtor sensor

void Sensor::setSensLevel(int level){
  if(level >= 0 && level <= 20){
    cout << "Nivel de agua muito baixo! " << endl;
    _level = level;
  }else if(level >= 20 && level <= 100){
    cout << "Nivel de agua OK! " << endl;
    _level = level;
  }else{
    cout << "Nivel de agua fora do escopo! " << endl;
    cout << "Definindo como 50%..." << endl;
    _level = 50;
  }
}//end set sens level

void Sensor::imprimeVolume() const{
  cout << "info: " << _level << '%' << endl;
}//end imprime volume