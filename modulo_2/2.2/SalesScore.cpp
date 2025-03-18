// 2.2
// Created by Lucas Kenzo Kuroki
//
#include "SalesScore2.h"

SalesScore::SalesScore(string title)
{
    setStoreTitle(title);
}//end salesscore

void SalesScore::setStoreTitle(string nome){
    if (nome.length() <= 20)
        storeTitle = nome;
    if (nome.length() > 20) {
        storeTitle = nome.substr(0, 20);
        cout << "O titulo "<< storeTitle << " excedeu o limite.\n" << endl;
    }
}//end setStoreTitle

string SalesScore::getStoreTitle(){
    return storeTitle;
}//end getStoreTitle

void SalesScore::bootSystem(){
    cout << "Score de Vendas!\n" << getStoreTitle() << endl;
}//end bootsystem

void SalesScore::calcSalesAverage()
{
    int acumulador = 0;     //acumula os valores inseridos pelo user
    int numVendas = -1;      //conta as vendas iseridas pelo user
    int valor = 0;          //armazena o valor de cada venda
    double media = 0;       //armazena a media de vendas


    while (valor != -1)
    {
      acumulador += valor;
      numVendas++;

      cout << "Digite o valor da venda ou -1 para sair: " << endl;
      cin >> valor;
    }//end while

    if (numVendas != 0)
    {
        media = static_cast<double>(acumulador) / numVendas;

        cout << "\nVendas inseridas: " << numVendas << ", vendas: " << acumulador << endl;
        cout << "A media de vendas foi: " << setprecision(2) << fixed << media << endl;

    }//end if
    else
    {
      cout << "Nao foi inserido nenhuma venda." << endl;
    }

}//end calcSalesAverage

