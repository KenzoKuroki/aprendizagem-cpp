// 4.3 - Usando ponteiros para manipular menu
// Created by Lucas Kenzo Kuroki
//

#include "menu_ponteiro.h"

int main(){
  int opcao = 0;
  Menu menu;

  do{
    menu.selectMenu(opcao);
    cin >> opcao;
  }while(menu.getFlagOut() != 1);
  return 0;
}