// 6.5 -
// Created by Lucas Kenzo Kuroki
//

#include "Cursos.hpp"

//-----------------------------------------------
// BIBLIOTECAS
//-----------------------------------------------

//----------------------------------------------------
// Desenvolvimento de funções membro da classe cursos
//----------------------------------------------------

//-----------------------------------------------
// Construtor Cursos
Cursos::Cursos(const string &curso, const string &empresa):
 _curso(curso), _empresa(empresa)
{
}//end construtor Cursos

//-----------------------------------------------
// função set nome curso
void Cursos::setNomeCurso(const string &curso)
{
  _curso = curso;
}//end set nome cursos

//-----------------------------------------------
//
string Cursos::getNomeCurso() const
{
  return _curso;
}//end get nome cursos

//-----------------------------------------------
// função set nome empresas
void Cursos::setNomeEmpresa(const string &empresa)
{
  _empresa = empresa;
}//end set nome empresas

//-----------------------------------------------
//função get nome empresas
string Cursos::getNomeEmpresa() const
{
  return _empresa;
}//end getNomeEmpresa

//-----------------------------------------------
// funcao para imprimir valores
void Cursos::mostraValores() const
{
  cout << getNomeCurso() << " " << "da empresa: "
       << getNomeEmpresa();
}//end mostraValores
//-----------------------------------------------