//
//  Utilizando as funcoes strcmp e strncmp para comparar strings
//


#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstring>
using std::strcmp;
using std::strncmp;

int main()
{
  const char *str1 = "WR kits";
  const char *str2 = "WR Kits";
  const char *str3 = "WR Kits Curso de C++";

  if(strcmp(str1,str2)==0)
    cout << str1 << " igual a " << str2 << endl;
  else if(strcmp(str1,str2)>0)
    cout << str1 << " maior que " << str2 << endl;
  else
    cout << str1 << " menor que " << str2 << endl;

  if(strncmp(str1,str3,7)==0)
    cout << "Considerando os 7 primeiros caracteres, " << str1 << " igual a " << str3 << endl;
  else if(strncmp(str1,str3,7)>0)
    cout << "Considerando os 7 primeiros caracteres, " << str1 << " maior que " << str3 << endl;
  else
    cout << "Considerando os 7 primeiros caracteres, " << str1 << " menor que " << str3 << endl;

  cout << "\nPrograma encerrado.\n";
  return 0;

} //end main
