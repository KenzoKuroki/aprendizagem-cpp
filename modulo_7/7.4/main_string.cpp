//
// Created by Lucas Kenzo Kuroki
//

#include "String.hpp"

int main(){
  String s1("Ola pessoal, ");
  String s2("sejam todos ");
  String s3("bem vindos!");

  cout << (s1+=s2+=s3) << endl;

  cout << s1 << s3 << endl;

  s1 =  s2[6];

  cout << s1 << endl;

  cout << "\nFIM" << endl;
  return 0;
}