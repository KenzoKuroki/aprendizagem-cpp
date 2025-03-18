//
// Created by Lucas Kenzo Kuroki
//

#ifndef SALESSCORE_H
#define SALESSCORE_H
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

class SalesScore
{
public:
    SalesScore(string name);                  //construtor
    void setStoreTitle(string name);          //Função-membro que configura o nome da loja
    string getStoreTitle();                //Função-membro que obtem o nome da loja
    static void bootSystem(string storeTitle);    //Função-membro para inicializar o sistema

private: //usuario final nao acessa isso
    string storeTitle;// membro de dados

};



#endif //SALESSCORE_H
