//
//  5.5 - Classe Components para contagem de componentes
//  Created by Lucas Kenzo Kuroki

#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strcpy;

#include "Components.hpp"


int Components::compCnt = 0;

// =====================================================
// Construtor: aloca memoria para strings e incrementa a contagem
Components::Components(const char * const typeComp, const char * const modelComp)
{
  _typeComp  = new char [strlen(typeComp)+1];
  strcpy(_typeComp,typeComp);

  _modelComp = new char [strlen(modelComp)+1];
  strcpy(_modelComp,modelComp);

  compCnt++;

  cout << "Criado: " << _typeComp << ' ' << _modelComp << endl;

} //end construtor

// ========================================================
// Destrutor: libera memoria e decrementa o num de componentes
Components::~Components()
{

  cout << "Removido: " << _typeComp << ' ' << _modelComp << endl;
  delete [] _typeComp;
  delete [] _modelComp;

  compCnt--;

} //end destrutor

// ========================================================
// Retorna o tipo de componente
const char *Components::getTypeComp()
{
  return _typeComp;

} //end getTypeComp

// ========================================================
// Retorna o modelo do componente
const char *Components::getModelComp()
{
  return _modelComp;

} //end getModelComp

// ========================================================
// Retorna o n�mero de componentes instanciados
int Components::getCompCnt()
{

  return compCnt;

} //end getCompCnt
