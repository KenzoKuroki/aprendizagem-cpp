//
//  Utilizando as funcoes strcpy e strncpy para copiar strings
//


#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcpy;
using std::strncpy;

int main()
{
  char str1[] = "WR Kits Curso C++";
  char str2[20];
  char str3[12];

  strcpy(str2,str1);

  cout << "String str1 = " << str1 << '\n'
       << "String str2 = " << str2 << '\n';

  strncpy(str3,str1,7);
  str3[7] = '\0';

  cout << "String str3 = " << str3 << endl;

  cout << "\nPrograma encerrado.\n";
  return 0;

} //end main
