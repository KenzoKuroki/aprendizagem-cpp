// 1.3: orintecao a objetos
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

//=============================================================
//Desenvolvimento de Classes
//=============================================================

class SaleScore
{
  public: //especifica o acesso

    void bootSystem(string storeTitle)
    {
      cout << "Score de Vendas! \n" << storeTitle << endl;
    }

};
//=============================================================

int main(){
  string storeTitle;
  SaleScore mySales;
  SaleScore mySales2;

  cout << "Insira o nome da loja " << endl;
  getline(cin, storeTitle); // le o nome da loja com espaço em branco
  cout << endl;
  mySales.bootSystem(storeTitle);




  return 0;
}