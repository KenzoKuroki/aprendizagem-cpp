//
// Created by Lucas Kenzo Kuroki on 26/03/25.
//

#include "CursoCoproduzido.hpp"

//-----------------------------------------------
//construtor para cursos coproduzidos
CursoCoproduzido::CursoCoproduzido(const string &curso, const string &empresa, double taxa, int quantidade, double valorFixo):
 CursoAfiliado(curso, empresa, taxa, quantidade)
{
    setValorFixo(valorFixo);
}//end construtor

//-----------------------------------------------
//funcao setValorFixo
void CursoCoproduzido::setValorFixo(double value)
{
    _valorFixo = (value < 0.0)?0.0:value;
}//end setValorFixo

//-----------------------------------------------
//funcao para pegar o valor
double CursoCoproduzido::getValorFixo() const{
    return _valorFixo;
}//end getValorFixo

//-----------------------------------------------
//funcao calcular lucro
double CursoCoproduzido::calculaLucro() const
{
    return getValorFixo() + CursoAfiliado::calculaLucro();
}//end calcula lucro

//-----------------------------------------------
//funcao para exibir o valor valor fixo
void CursoCoproduzido::mostraValores() const
{
    cout << "\nCursos: ";
    CursoAfiliado::mostraValores();
    cout << "\nValor fixo: " << getValorFixo() << endl;

}//end mostraValores