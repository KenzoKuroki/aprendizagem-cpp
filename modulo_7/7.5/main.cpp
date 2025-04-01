//
// created by Lucas Kenzo Kuroki
//

// ==============================================
// Bibliotecas
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Array.hpp"

// ==============================================
// Prototipos
void printArray(Array &a1);


// ==============================================
//  Funcao Principal
int main()
{
  Array a1(6);
  Array a2;

  cout << "\nTamanho do Array1: " << a1.getSize()
       << "\nConteudo 1:\n" << a1;

  cout << "\nTamanho do Array2: " << a2.getSize()
       << "\nConteudo 2:\n" << a2;

  for(int i=0; i<6; i++)
    a1[i] = i+1;

  for(int i=6; i<16; i++)
    a2[i-6] = i+1;

  cout << "\nConteudo 1:\n" << a1
       << "\nConteudo 2:\n" << a2;

  if(a1 != a2)
    cout << "\n====================\n"
         << " a1 diferente de a2 "
         << "\n====================\n" << endl;

  Array a3(a1);

  cout << "\nTamanho do Array3: " << a3.getSize()
       << "\nConteudo 3:\n" << a3;

  a1 = a2; //teste de atribui��o. a1 � menor que a2
  cout << "\nApos a1=a2: \n"
       << "\nConteudo 1:\n" << a1 << "\nConteudo 2:\n" << a2 << endl;

  if(a1 == a2)
    cout << "\n===============\n"
         << " a1 igual a a2 "
         << "\n===============\n" << endl;

  cout << "\na1[3]= " << a1[3];
  a1[3] = 741;
  cout << "\nConteudo 1:\n" << a1;

  printArray(a1);


  //a1[25] = 555;



  cout << "\n\nFim." << endl;
  while(1);
  return 0;

} //end main


// ==============================================
// Desenvolvimento das Funcoes
void printArray(Array &a1)
{
  cout << "printArray:\n";
  cout << a1 << endl;
  a1[0] = 555;
  cout << a1 << endl;

} //end printArray
