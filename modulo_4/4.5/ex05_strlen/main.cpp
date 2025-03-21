//
//  Utilizando a funcao strlen para para ler o comprimento de strings
//


#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;

int main()
{
  const char *str1 = "WR Kits";

  cout << "A string " << str1 << " tem " << strlen(str1) << " caracteres" << endl;


  cout << "\nPrograma encerrado.\n";
  return 0;

} //end main
