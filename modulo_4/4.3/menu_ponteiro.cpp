// 4.3 - Implementando funções para manupular menus
// Created by Lucas Kenzo Kuroki
//

#include "menu_ponteiro.h"

Menu::Menu()
{
  cout << "Iniicando menu..." << endl;
  atual = 0; //menu inicial
  flagOut = 0;
}

void Menu::selectMenu(int option)
{
  if(atual == 0)
  {
    switch (option)
    {
      case 0:
          cout << "Menu Principal" << endl;
          numLinha = 4;
          coluna = 0;
          imprimeMenu();
          break;
      case 1: //Hora
          atual = 1;
          numLinha = 3;
          coluna = 9;
          cout << "Menu hora: " << endl;
          cout << "Escolha um sub menu: " << endl;
          imprimeMenu();
          break;
      case 2: //Temperatura
          atual = 2;
          numLinha = 4;
          coluna = 4;
          cout << "Menu temperatura: " << endl;
          imprimeMenu();
          break;
      case 3: //Ajuda
          numLinha = 1;
          coluna = 8;
          imprimeMenu();
          selectMenu(0);
          break;
      case 4: //Sair
          atual = -1;
          coluna = 12;
          imprimeMenu();
          flagOut = 1;
          break;
       default:
         cout << "Opcao invalida" << endl;
         selectMenu(0);
         break;
      }//end switch
    }//end if - menu 0

    else if(atual == 1)
    {
      switch (option){
        case 1:
          cout << "Sub-menu A" << endl;
          numLinha = 3;
          coluna = 9;
          imprimeMenu();
          break;
        case 2:
          cout << "Sub-menu B" << endl;
          numLinha = 3;
          coluna = 9;
          imprimeMenu();
          break;
        case 3:
          atual = 0;
          selectMenu(0);
          break;
      }
    }

    else if(atual == 2){
      switch (option){
        case 1:
          cout << "Sub-menu A" << endl;
          cout << "Escolha um sub menu: \n";
          numLinha = 4;
          coluna = 4;
          imprimeMenu();
          break;
        case 2:
          cout << "Sub-menu B" << endl;
          cout << "Escolha um sub menu: \n";
          numLinha = 4;
          coluna = 4;
          imprimeMenu();
          break;
        case 3:
          cout << "Sub-menu C" << endl;
          cout << "Escolha um sub menu: \n";
          numLinha = 4;
          coluna = 4;
          imprimeMenu();
          break;
        case 4:
          atual = 0;
          selectMenu(0);
          break;

      }
    }//end else if do 2

}//end selectMenu

void Menu::imprimeMenu()
{
  static const char *numeroOpt[4] = { "1) ",
                                  "2) ",
                                  "3) ",
                                  "4) " };

  static const char *comandOpt[13] = { "Menu 1 - Hora",
                                      "Menu 2 - Temperatura",
                                      "Menu 3 - Ajuda",
                                      "Sair",
                                      "Sub-menu A",
                                      "Sub-menu B",
                                      "Sub-menu C",
                                      "Voltar",
                                      "Consulte o Google.com",
                                      "Sub-menu A",
                                      "Sub-menu B",
                                      "Voltar",
                                      "Saindo..."
  };

  if(atual == -1) cout << comandOpt[coluna] << endl;
  else
    for(int i = coluna, j = 0; i < coluna + numLinha; i++, j++)
    {
      if (numLinha == 1) cout << comandOpt[i] << endl;
      else cout << numeroOpt[j] << comandOpt[i] << endl;
    }

}//end imprimeMenu

int Menu::getFlagOut(){
  return flagOut;
}