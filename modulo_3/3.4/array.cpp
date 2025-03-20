// 3.4 -
// Created by Lucas Kenzo Kuroki on 19/03/25.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
  int vetor[10];
  int b[9] = {4, 8, 15, 16, 23, 42};

  char palavra1[] = {'T', 'e', 's', 't', 'e'};
  char palavre2[] = "teste";
  char palavra3[] = {'T', 'e', 's', 't', 'e', '\0'};

  for(int i = 0; i < 10; i++)
    vetor[i] = i+1;

  for (int i = 0; i < 10; i++)
    cout << setw(5) << "vetor[" << i << "] = "
         << setw(4) << vetor[i] << endl;

  for(int i=0; i<9; i++)
    cout << setw(2) << "b[" << i << "]= "
    << setw(4) << b[i] << endl;

  return 0;
}

