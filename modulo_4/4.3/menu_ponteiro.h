// 4.3 - Exercicio para criar menu utilizando ponteiros
// Created by Lucas Kenzo Kuroki
//

#ifndef MENU_PONTEIRO_H
#define MENU_PONTEIRO_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


class Menu {
    public:
        Menu();
        void selectMenu(int option);        //função-membro que seleciona o menu
        void imprimeMenu();                 //função-membro que imprime o menu
        int getFlagOut();                   //funçõe-membro que retorna o valor da flagOut
    private:
        int flagOut;                        //variavel que indica se o usuario deseja sair do menu
        int numLinha;                       //variavel que controla a quantidade de linhas do menu
        int coluna;                         //variavel que indica o indeice inicial do menu
        int atual;                          //varivel que controla qual o nivel atual
};



#endif //MENU_PONTEIRO_H
