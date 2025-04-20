//
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

void ex1(string str);
void ex2(string str);
void ex3(string str);
void ex4(string str);
void ex5(string str);
void ex6(string str);

int main(){

  string str1("Vamos estudar C++, C++ top");

  ex6(str1);
  return 0;
}

void ex1(string str)
{
  cout << "Exe 1: " << endl;
  cout << str.find("C++") << endl;
}
void ex2(string str){
  cout << "Exe 2: " << endl;
  cout << str.rfind("C++") << endl;
}
void ex3(string str){
  cout << "Exe 3: " << endl;
  cout << str.find('t') << endl;

  cout << str.rfind('t') << endl;
}
void ex4(string str){

  int local;
  cout << "Exe 4: " << endl;
  local = str.find("teste");
  cout << local << endl;
}
void ex5(string str){
  cout << "Exe 5: " << endl;
  int index;

  index = str.find_first_of("abcd");
  cout << index << endl;

  index = str.find_last_of("abcd");
  cout << index << endl;

  index = str.find_first_not_of("abcd");
  cout << index << endl;

  index = str.find_last_not_of("abcd");
  cout << index << endl;
}
void ex6(string str){
  cout << "Exe 6: " << endl;
  int token = str.find(" ");
  while(token != -1){
    str.replace(token, 1, "_");
    token = str.find(" ",token+1);
  }
  cout << str << endl;
}