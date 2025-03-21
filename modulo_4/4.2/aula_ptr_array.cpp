// 4.2 - aula de ponteiros para arrays
// Created by Lucas Kenzo Kuroki on 20/03/25.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
  int vetor[6] = {4,8,15,16,23,42};
  int *ptr;

  ptr = &vetor[0];
  for(int i = 0; i < 6; i++)
    cout << "    endereço: "<< &vetor[i] << ",campo: " << vetor[i] << endl;

  for (int i = 0; i < 6; i++) {
    cout << "endereço ptr: " << ptr << ", campo: " << *ptr << endl; //deslocamento compativel com o tipo do dado
    *ptr = *ptr * 2;
    ptr++;
  }
  cout << endl;
  ptr -= 6; //rebobinando o incremento
  for (int i = 0; i < 6; i++, ptr++) {
    cout << "Campo atualizado: " << vetor[i] << endl;
    cout << "--Campo novo ptr: " << *ptr << endl;
  }

  return 0;

}

