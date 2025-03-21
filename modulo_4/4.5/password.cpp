// 4.5 - criar
// Created by Lucas Kenzo Kuroki
//

//==============================
//Bibliotecas utilizadas
//==============================
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstring>
using std::strcmp;

//==============================
//Prototipos de funções
void systemLK(short &status);
void systemError(short &counter);

//==============================
//Função principal
//==============================
int main()
{
  short statusMain = 0, counter = 0;
  char senha[21] ="1234";
  char entrada[21] =  "1234";

  cout << "Crie uma senha, não use espaços: " << endl;
  cout << ">>> ";
  cin >> senha;

  cout << "\nSenha criada com sucesso!\n" << senha << endl;

  do{
      cout << "Entre com a senha: " << endl;
      cout << ">>> ";
      cin >> entrada;

      if(strcmp(senha, entrada) == 0)
        systemLK(statusMain);
      else
        systemError(counter);
  }while (statusMain != 1 && counter < 3);

  if(counter == 3)
    cout << "Sistema bolqueado!\n";
  cout << "Sistema encerrado.\n";

  return 0;
}//end main

//==============================
//implementando funcoes
//==============================
void systemLK(short &status) {
  cout << "Senha correta!" << endl;
  cout << "Entrando no sistema LK!\n" << endl;
  status = 1;
}//end systemLK

void systemError(short &counter) {
  cout << "Senha incorreta!" << endl;
  cout << "Tentativas restantes: " << 2 - counter << endl;
  counter++;
}

