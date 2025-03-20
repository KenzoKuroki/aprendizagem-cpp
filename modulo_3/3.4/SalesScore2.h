// 3.4
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
using std::setw;           //determina largura para impressao

class SalesScore
{
public:
    const static int products = 10;                            //numero de produtos vendidos
    SalesScore(string name, const int salesArray[]);      //construtor
    void setStoreTitle(string name);                      //Função-membro que configura o nome da loja
    string getStoreTitle();                               //Função-membro que obtem o nome da loja
    void bootSystem();                                    //Função-membro para inicializar o sistema
    void calcSalesAverage();                              //função-membro para calcular o total e a media de vendas
    void enterProducts();                                 //função-membro para inserir o tipo de produtos
    void productsReport();                                //função-membro para imprimir a quantidade de produtos

    void processSales();                                  //processa operações com os dados
    int getMin();                                         //localiza o valor minimo
    int getMax();                                         //localiza o valor maximo

    double getAvg ();                                     //calcula a media de vendas
    void genGraph ();                                     //Gera um grafico de barras para a distribuição das vendas
    void dispSales ();                                    //apresenta os resultados

private:
    string storeTitle;// membro de dados
    int prodA;
    int prodB;
    int prodC;
    int sales[products];

};



#endif //SALESSCORE_H
