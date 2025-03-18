// 2.2
// Created by Lucas Kenzo Kuroki
//

#ifndef SALESSCORE_H
#define SALESSCORE_H
#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;          //casas depois da virgula serão exibidas

#include <iomanip>         //inclui manipuladores de fluxo parametrizados
using std::setprecision;   //determina presicao para casa numerica

class SalesScore
{
public:
    SalesScore(string name);                      //construtor
    void setStoreTitle(string name);              //Função-membro que configura o nome da loja
    string getStoreTitle();                       //Função-membro que obtem o nome da loja
    void bootSystem();                     //Função-membro para inicializar o sistema
    void calcSalesAverage();                      //função-membro para calcular o total e a media de vendas

private:
    string storeTitle;// membro de dados

};



#endif //SALESSCORE_H
