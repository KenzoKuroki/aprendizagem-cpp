//
// Created by Lucas Kenzo Kuroki
//

#include "CursoAfiliado.hpp"

//-----------------------------------------------
//construtor para cursos afiliados
CursoAfiliado::CursoAfiliado(const string &curso, const string &empresa, double taxa, int quantidade):
 Cursos(curso, empresa)
{
  setTaxa(taxa);
  setQuantidade(quantidade);
}//end construtor

//-----------------------------------------------
//funcao mostra valores
void CursoAfiliado::setTaxa(double taxa)
{
  _taxa = (taxa>0.0 && taxa<1.0)?taxa:0.0;
}//end setTaxa

//-----------------------------------------------
//funcao para pegar a taxa
double CursoAfiliado::getTaxa() const{
  return _taxa;
}//end getTaxa

//-----------------------------------------------
//funcao para configurar quantidade
void CursoAfiliado::setQuantidade(int quantidade)
{
  _quantidade = (quantidade<0)?0:quantidade;
}//end setQuantidade

//-----------------------------------------------
//funcao pegar a quantidade
int CursoAfiliado::getQuantidade() const
{
  return _quantidade;
}//end getQuantidade

//-----------------------------------------------
//funcao calcular lucro
double CursoAfiliado::calculaLucro() const
{
  return getTaxa()*getQuantidade();
}//end calcula lucro

//-----------------------------------------------
//funcao para exibir os vaalores de taxa e quantidade
void CursoAfiliado::mostraValores() const
{
  cout << "\nCursos: ";
  Cursos::mostraValores();
  cout << "Taxa: " << getTaxa()
       << "\nQuantidade: " << getQuantidade()
       << endl;

}//end mostraValores