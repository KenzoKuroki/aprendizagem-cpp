//
// Created by Lucas Kenzo Kuroki
//


#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main(){

  // char dado = '0';
  // cout << "Digite um dado: ";
  // dado = cin.get();
  // cout << "dado: ";
  // cout.put(dado) << endl;

  char buffer[50];
  cout << "Digite uma frase: ";
  // cin.get(buffer, 20, 'f');
  // cin.getline(buffer, 20);
  cin.read(buffer, 10);             //precisa ter 10 de size

  cout << "voce digitou a frase: ";
       //<< buffer << endl;
  cout.write(buffer, cin.gcount());


  cout << "\nFIM"<< endl;
  return 0;
}