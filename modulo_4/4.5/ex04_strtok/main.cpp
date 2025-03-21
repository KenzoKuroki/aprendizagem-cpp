//
//  Utilizando a funcao strtok para gerar tokens a partir de strings
//


#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strtok;

int main()
{
  char str1[] = "WR Kits C++ Curso Completo";
  char *tokenPtr;

  cout << "Gerar tokens da string: \n" << str1 << "\n\n";

  tokenPtr = strtok(str1, " ");

  while(tokenPtr!=NULL)
  {
    cout << tokenPtr << " | " ;
    tokenPtr = strtok(NULL, " ");  //pega o proximo token

  } //end while

  cout << "\n\nstr1 resultante: " << str1 << endl;


  cout << "\nPrograma encerrado.\n";
  return 0;

} //end main
