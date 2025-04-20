//
// Created by Lucas Kenzo Kuroki on 09/04/25.
//

#include "Alimentos.hpp"

//===================================================================================
// construtor
Alimentos::Alimentos(uint16_t ID, string food, double prot, double carb, double fats){
    setId(ID);
    setFood(food);
    setProt(prot);
    setCarb(carb);
    setFats(fats);
}

//===================================================================================
// funcao para definir o Id
void Alimentos::setId(uint16_t ID){
  _ID = ID;
}

//===================================================================================
// funcao para pegar o Id
uint16_t Alimentos::getId() const{
  return _ID;
}

//===================================================================================
// funcao para definir a string food
void Alimentos::setFood(string food){
  const char *foodStr = food.data();
  uint8_t len = food.size();
  len = (len < 40) ? len : 39;
  strncpy(_food, foodStr, len);
  _food[len] = '\0';
}

//===================================================================================
// funcao para retornar a string food
string Alimentos::getFood() const{
  return _food;
}

//===================================================================================
// funcao para definir a quantidade de proteinas em double
void Alimentos::setProt(double prot){
  _prot = prot;
}

//===================================================================================
// funcao para retornar a quantidade de proteina em double
double Alimentos::getProt() const{
  return _prot;
}

//===================================================================================
// funcao para definir os carboidratos em double
void Alimentos::setCarb(double carb){
  _carb = carb;
}

//===================================================================================
// funcao para retornar os carboidratos em double
double Alimentos::getCarb() const{
  return _carb;
}

//===================================================================================
// funcao para definir as gorduras em double
void Alimentos::setFats(double fats){
  _fats = fats;
}

//===================================================================================
// funcao para retornar a quantidade de gorduras do alimento
double Alimentos::getFats() const{
  return _fats;
}
