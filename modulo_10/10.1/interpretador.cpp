// 10.1 - exercicio - criar um interpretador para manipular strings
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

void select(string control, string *vetStr, int *contents);
void printHelp();
void printExit();
void printStr(string *vetStr, int *contents);
void printMemory(string *vetStr, int *contents);
void putVar(string *vetStr, int *contents);
void putContent(string control, string *vetStr, int *contents);

int main(){
  string control;
  string vetStr[5];
  int contents[5];

  short int count = 0;
  cout << "------------------------\n"
       << " Interpretador Simples\n"
       << "------------------------\n" << endl;
  do{
    cout << count << "...";
    cin >> control;
    count++;

    select(control, vetStr, contents);


  }while(control != "exit");
  return 0;
}

void select(string control, string *vetStr, int *contents)
{
    if (control == "help")
        printHelp();
    else if (control == "exit")
        printExit();
    else if (control == "print")
        printStr(vetStr, contents);
    else if (control == "var")
        putVar(vetStr, contents);
    else if (control == "memory")
        printMemory(vetStr, contents);
    else {
        putContent(control, vetStr, contents);
    }
}

void printHelp() {
    cout << "Interpretador Simples - Help\n\n"
         << "-------------------------------------------------------------------\n"
         << "Sumario de comandos:\n"
         << "-------------------------------------------------------------------\n"
         << "* print  (Imprime uma string ou um conteudo de um variavel na tela)\n"
         << "* var    (declaracao de variavel)\n"
         << "* memory (mostra todas os conteudos das variaveis)\n"
         << "* exit   (aborta o programa)\n"
         << "-------------------------------------------------------------------\n" << endl;
}

void printExit() {
    cout << "Programa encerrado!\n" << endl;
}

void printStr(string *vetStr, int *contents) {
    string str;
    cin >> str;
    short int flag = 0;

    for (int i = 0; i < 5; i++) {
        if (vetStr[i] == str) {
            cout << "Variavel: " << vetStr[i] << ": " << contents[i] << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << str << endl;
}

void printMemory(string *vetStr , int *contents) {
    cout << "name                         content\n";
    for (int i =0; i < 5; i++) {
        if (vetStr[i].empty()) {
            cout << "##############                     0" << endl;
        }else
            cout << vetStr[i] << "           " << contents[i] << endl;
    }
}

void putContent(string control, string *vetStr, int *contents) {
    int i = 0,flag = 0;
    while (i<5 && flag != 1){
        if (vetStr[i] == control) {
            string str;
            cin >> str;
            if (str == "val") {
                cout << "Digite o conteudo de " << vetStr[i] << ':';
                int valor;
                cin >> valor;
                contents[i] = valor;
                flag = 1;
            }//end if interno
        }//end if externo
        i++;
    }//end while
    if (flag == 0)
        cout << "Comando invalido" << endl;
}

void putVar(string *vetStr, int *contents) {
    string nameVar;
    cin >> nameVar;
    int i = 0, flag = 0;
    while (i<5 && flag != 1){
        if (vetStr[i].empty()) {
            vetStr[i] = nameVar;
            contents[i] = 0;
            flag = 1;
        }
        i++;
    }

    if (flag!=1) {
        vetStr[0] = nameVar;
        contents[0] = 0;
    }
}