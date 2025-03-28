// 6.3 - Implementação de funções da classe robo
// Created by Lucas Kenzo Kuroki
//

#include "robo.hpp"

//---------------------------------------------------------------------------------
// construtor robo, pega o nome, tipo, funcao e cordenadas
Robo::Robo(const string &type, const string &name, const string &function, int x, int y):
_tipo(type), _name(name), _function(function), _X(x), _Y(y)
{
}//end construtor

//---------------------------------------------------------------------------------
// função que configura o tipo do robo
void Robo::setType(const string &type)
{
  _tipo = type;
}//end setType

//---------------------------------------------------------------------------------
// função que retorna o tipo do robo
string Robo::getType() const
{
  return _tipo;
}//end getType

//---------------------------------------------------------------------------------
// função que define o name do robo
void Robo::setName(const string &name)
{
  _name = name;
}//end setName

//---------------------------------------------------------------------------------
// função que retorna o nome do robo
string Robo::getName() const
{
  return _name;
}//end getName

//---------------------------------------------------------------------------------
// função que define a função
void Robo::setFunction(const string &function)
{
  _function = function;
}//end setFunction

//---------------------------------------------------------------------------------
// função que retorna a funcao do robo
string Robo::getFunction() const
{
  return _function;
}//end getFunction

//---------------------------------------------------------------------------------
// função que define o x
void Robo::setX(int x)
{
  _X = x;
}//end setX

//---------------------------------------------------------------------------------
// função que retorna o x
int Robo::getX() const
{
  return _X;
}//end getX

//---------------------------------------------------------------------------------
// função que define o y
void Robo::setY(int y)
{
  _Y = y;
}//end set Y

//---------------------------------------------------------------------------------
// função que retorna o y
int Robo::getY() const
{
  return _Y;
}//end getY

//---------------------------------------------------------------------------------
// função que calcula a localização
//int Robo::calculateLocation()
//{
//  return
//}//end calculate Location

//---------------------------------------------------------------------------------
// função que exibe o robo, tipo, nome e cordenadas atual
void Robo::printStatus() const
{
  cout << "----------------------\n"
       << "Robo: " << getName() << "\n"
       << "Tipo: " << getType() << "\n"
       << "Funcao: " << getFunction() << "\n";

}//end printStatus