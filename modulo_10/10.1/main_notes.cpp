// 10.1
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

int main(){
  string str1 = "LK teste";
  string str2("LK taste");

  cout << str1 << endl;
  cout << str2 << endl;

  cout << str1.at(0) << endl;
  cout << str2.compare(str1) << endl;

  str2.swap(str1);

  cout << str1 << endl;
  cout << str2 << endl;

  string str3 = str1 + ' ' + str2;
  cout << str3 << endl;

  if (str3.empty())
    cout << "String vazia" << endl;
  else
    cout << str3 << endl;
  return 0;
}
