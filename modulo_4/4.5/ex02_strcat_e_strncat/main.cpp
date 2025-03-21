//
//  Utilizando as funcoes strcat e strncat para concatenar strings
//


#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcat;
using std::strncat;

int main()
{
  char str1[19] = "WR Kits ";
  char str2[] = "Curso C++ ";
  char str3[42] = "";


  cout << "String str1 = " << str1 << '\n'
       << "String str2 = " << str2 << '\n'
       << "String str3 = " << str3 << '\n';

  cout << "===============================" << '\n';

  strcat(str1,str2);

  cout << "String str1 = " << str1 << '\n'
       << "String str2 = " << str2 << '\n';

  strncat(str3,str1,4);
  str3[4] = '\0';

  cout <<"String str3 = " << str3 << endl;


  cout << "\nPrograma encerrado.\n";
  return 0;

} //end main
