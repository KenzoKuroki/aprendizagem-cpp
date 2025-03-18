// 1.5
// Created by Lucas Kenzo Kuroki
//
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
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

void SalesScore::bootSystem(string storeTitle){
    cout << "Score de Vendas!\n" << storeTitle << endl;
}//end bootsystem

