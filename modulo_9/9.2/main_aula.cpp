// 9.2 - notas da aula manipulando arquivos de entrada
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::cerr;

#include <cstdlib>
using std::exit;
#include <fstream>
using std::ifstream;
using std::ofstream;

int main(){
  char str[50];

  ofstream ArquivoW("arquivoTeste.txt", ios::out);
  if(!ArquivoW){
    cerr << "Error opening file" << endl;
    exit(0);
  }

  ArquivoW << "Lendo uma string" << endl;

  ifstream ArquivoR("arquivoTeste.txt", ios::in);
  if(!ArquivoR){
    cerr << "Error reading file" << endl;
    exit(1);
  }

  ArquivoR >> str;

  cout << str << endl;


  ArquivoW.close();
  cout << "Arquivo gerado com sucesso" << endl;


  return 0;
}