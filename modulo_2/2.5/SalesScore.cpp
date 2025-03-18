// 2.5
// Created by Lucas Kenzo Kuroki
//
#include "SalesScore2.h"

SalesScore::SalesScore(string title)
{
    setStoreTitle(title);
    prodA = 0;
    prodB = 0;
    prodC = 0;

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

void SalesScore::enterProducts()
{
    int product;

    cout << "Insira o produto vendido: " << endl
    << "ou tecle ctrl+d para sair." << endl;

    while ((product = cin.get())!= EOF)
    {
        switch (product)
        {
            case 'a':
            case 'A':
              prodA++;
              break;
            case 'b':
            case 'B':
              prodB++;
              break;
            case 'c':
            case 'C':
              prodC++;
              break;
            case '\n': //ignora new line
            case '\t': //ignora tab
            case ' ': //ignora espaço em branco
              break;
            default:
              cout << "Produto não cadastrado, insira um produto valido(a,b ou c):" << endl;
              break;
        }
    }//end while

}//end enterProducts

void SalesScore::productsReport()
{
    cout << "\n-----------------------------"
         << "\nResumo dos produtos vendidos: "
         << "\n-----------------------------"
         << "\nProduto A: " << prodA
         << "\nProduto B: " << prodB
         << "\nProduto C: " << prodC
         << "\n-----------------------------" << endl;

}//end productsReport
