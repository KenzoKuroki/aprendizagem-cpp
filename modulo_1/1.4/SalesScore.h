//
// Created by Lucas Kenzo Kuroki
//

#ifndef SALESSCORE_H
#define SALESSCORE_H

class SalesScore
{
public:
    SalesScore(string s)
    {
        setStoreTitle(s);
    }

    void setStoreTitle(string s){
        storeTitle = s;
    }//end setStoreTitle

    string getStoreTitle(){
        return storeTitle;
    }

    void bootSystem(string storeTitle){
        cout << "Score de Vendas!\n" << storeTitle << endl;
    }//end bootsystem

private: //usuario final nao acessa isso
    string storeTitle;// membro de dados

};



#endif //SALESSCORE_H
