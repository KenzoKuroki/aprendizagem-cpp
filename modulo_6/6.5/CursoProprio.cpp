//
// Created by Lucas Kenzo Kuroki
//

//-----------------------------------------------
//BIBLIOTECAS
//-----------------------------------------------
#include "CursoProprio.hpp"

//-----------------------------------------------
// Construtor Curso Proprio
CursoProprio::CursoProprio(const string &curso, const string &nomeEmpresa, double valorCurso):
 Cursos(curso, nomeEmpresa)
{
  setValorCurso(valorCurso);
}//end curso proprio

//-----------------------------------------------
// funcao fetValor Curso
void CursoProprio::setValorCurso(double valorCurso)
{
  _valorCurso = (valorCurso<0.0)?0.0:valorCurso;
}//end set valor curso

//-----------------------------------------------
// funcao retorna o valor do curso
double CursoProprio::getValorCurso() const
{
  return _valorCurso;
}//end getValorCurso

//-----------------------------------------------
//função calculalucro
double CursoProprio::calculaLucro() const{
  return getValorCurso();
}

//-----------------------------------------------
//funcao mostra valores
void CursoProprio::mostraValores() const{
  cout << "Curso: ";
  Cursos::mostraValores();
  cout << "\nValor do curso: R$" << getValorCurso();
}