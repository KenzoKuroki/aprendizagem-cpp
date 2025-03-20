// 3.4
// Created by Lucas Kenzo Kuroki
//
#include "SalesScore2.h"

SalesScore::SalesScore(string title, const int salesArray[])
{
    setStoreTitle(title);
    prodA = 0;
    prodB = 0;
    prodC = 0;
    for (int i = 0; i < products; i++)
      sales[i] = salesArray[i];

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

void SalesScore::processSales()
{
  dispSales();
  cout << "\nMedia de vendas: " << setprecision(2)
       << fixed << getAvg() << endl;
  cout << "\nValor minimo: " << getMin()
       << "\nValor maximo: " << getMax() << endl;

  genGraph();
}//end processSales

void SalesScore::dispSales()
{
    cout << "Relatorio de vendas: " << endl;

    for (int i = 0; i < products; i++)
      cout << "Produto " << setw(2) << i+1 << ": "
           << setw(3) << sales[i] << endl;
}//end dispSales

int SalesScore::getMin ()
{
    int min_val = 1000;
    for (int i = 0; i < products; i++)
    {
        if(sales[i] < min_val)
          min_val = sales[i];
    }
    return min_val;
}//end getMin

int SalesScore::getMax ()
{
    int max_val = 0;
    for (int i = 0; i < products; i++)
    {
        if(sales[i] > max_val)
            max_val = sales[i];
    }
    return max_val;
}//end setMax

double SalesScore::getAvg()
{
    int acc = 0;

    for (int i = 0; i < products; i++)
        acc += sales[i];

    return static_cast<double>(acc) / products;
}//end getAvg

void SalesScore::genGraph()
{
  cout << "Grafico de vendas: " << endl;

  const int occSales = 11;
  int occ[occSales] = {0};

  for (int i = 0; i < products; i++)
    occ[sales[i]/100]++;

  for (int i = 0; i < occSales; i++){
    if(i==0)
      cout << "0-99: ";
    else if(i==10)
      cout << "1000: ";
    else
      cout << i*100 << "-" << (i*100)+99 << ": ";

    for (int j = 0; j < occ[i]; j++)
      cout << "#";

    cout << endl;
  }//end for
}//end GenGraph