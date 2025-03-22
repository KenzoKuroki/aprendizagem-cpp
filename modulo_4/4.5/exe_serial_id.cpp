// 4.5 - Programa que pede um numero serial e permite a execução de um sistema utilizando essa serial
// Created by Lucas Kenzo Kuroki
//

//================================================================
//Bibliotecas
//================================================================
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>
using std::strcmp;
using std::strncmp;
using std::strlen;
using std::strcpy;

//==============================
//Prototipos de funções
//==============================
void bootSystem(short &status, char *serial, char **splitedSerial);   //Função inicia sistema a partir da inserção da serial correta
void systemError(short &counter);                                     //Função que trata do erro na digitação da serial
void systemLK(char *serial, char **splitedSerial);                    //Função de controle do sistema: chama o menu e coleta os comandos
void showMenu();                                                      //Função para exibir o menu
void showSerial(int &status,char *serial, char **splitedSerial);      //Função para exibir a parcela da serial desejada a partir do cmd do sistema
void splitSerial(char * serial, char **splitedSerial, short &counter);  //Função para quebrar a serial digitada no pre-sistema para exibir posteriormente

//==============================
//Função principal
//==============================
int main()
{
  short statusMain = 0, counter = 0;
  char serial[24] ="12345-12345-12345-12345";
  char entrada[24] =  "1234";

// stings e ponteiros para manupulação
  char serialCopy[24];
  char *ptrSerial = serial;
  char *splitedSerial[4];

//coleta da serial pre sistema, e pega o serial separado ne funcao splitSerial
  cout << "Crie uma serial, no formato: (abcde-abcde-abcde-abcde): " << endl;
  cout << ">>> ";
  cin >> serial;

  strcpy(serialCopy, serial);
  splitSerial(serialCopy, splitedSerial, counter);
  if (counter != 5) cout << "\nSerial criada com sucesso!\n" << serial << endl;

//while principal, verifica erro de digitacao da serial e encerra o programa ou entra no sistema LK
  while (statusMain != 1 && counter < 1){
    cout << "Entre com a serial: " << endl;
    cout << ">>> ";
    cin >> entrada;

    if(strcmp(serial, entrada) == 0) {
      bootSystem(statusMain, ptrSerial, splitedSerial);
    }
    else
      systemError(counter);
  }

//mensagem de fim com diagnostico do sistema
  if (counter  == 5)
    cout << "A serial precisa ser do formato: (abcde-abcde-abcde-abcde)" << endl;
  else if(counter)
    cout << "Sistema bloqueado!\n";
  else
    cout << "Encerrando sistema com sucesso!.\n";

  return 0;
}//end main

//==============================
//implementando funcoes
//==============================
void bootSystem(short &status, char *serial, char **splitedSerial) {
  cout << "serial correta!" << endl;
  cout << "Entrando no sistema LK!\n" << endl;
  status = 1;
  systemLK(serial, splitedSerial);
}//end bootSystem

void systemError(short &counter) {
  cout << "Serial Invalido!" << endl;
  counter++;
}//end systemError

void showMenu() {
  cout << "0 - Exibir a serial completa\n"
       << "1 - Exibir o primeiro quinteto da serial\n"
       << "2 - Exibir o segundo quinteto da serial\n"
       << "3 - Exibir o terceiro quinteto da serial\n"
       << "4 - Exibir o ultimo quinteto da serial\n"
       << "7 - Para sair do sistema\n" << endl;

  cout << "Digite o comando: " << endl;
}// end showMenu

void systemLK(char *serial, char **splitedSerial) {
  int comando=0;
  cout << "Bem vindo ao menu do Sistema LK\n" << endl;
  do {
    showMenu();
    cin >> comando;
    showSerial(comando, serial, splitedSerial);
  }while (comando != 7);
}

void showSerial(int &status,char *serial, char **splitedSerial) {
  switch (status) {
    case 0:
      cout << "Serial completa:\n" << serial << endl;
      break;
    case 1:
      cout << "Primeiro quinteto da serial: " << splitedSerial[0] << endl;
      break;
    case 2:
      cout << "Segundo quinteto da serial: " << splitedSerial[1] << endl;
      break;
    case 3:
      cout << "Terceiro quinteto da serial: " << splitedSerial[2] << endl;
      break;
    case 4:
      cout << "Quarto quinteto da serial: " << splitedSerial[3] << endl;
      break;
    case 7:
      cout << "Saindo do Sistema LK!" << endl;
      break;
  }// end switch
  cout << endl;
}// end show serial

void splitSerial(char* serial, char** splitedSerial, short &counter) {
  char* token = strtok(serial, "-");
  int i = 0;

  while (token != nullptr) {
    splitedSerial[i] = token;
    i++;
    if (strlen(token) != 5) counter = 5;
    token = strtok(nullptr, "-");
  }
  if (i!=4) counter = 5;
}//end split Serial