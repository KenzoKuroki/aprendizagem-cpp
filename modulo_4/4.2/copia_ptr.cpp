// 4.2 - exercicio que transfere elementos de um array para outro usando ponteiros
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;

void copiarVetor(int *ptr1, int *ptr2, int tamanho);
void imprimirVetor(int *ptr, int tamanho);

int main()
{
  int array1[5] = {1,2,3,4,5};
  int array2[5] = {0};
  int numElementos = 0;

  numElementos = sizeof(array1)/4;
  int *ptr1 = array1;
  int *ptr2 = array2;

  cout << "Vetor inicial: " << endl;
  imprimirVetor(ptr1, numElementos);

  cout << "Vetor antes da cópia"<< endl;
  imprimirVetor(ptr2, numElementos);

  copiarVetor(ptr1, ptr2, numElementos);
  cout << "Vetor 2 copia do vetor 1: " << endl;
  imprimirVetor(ptr2, numElementos);

  return 0;

}

void copiarVetor(int *ptr1, int *ptr2, int tamanho)
{
  for(int i = 0; i < tamanho; i++) {
    *ptr2 = *ptr1;
    ptr1++;
    ptr2++;
  }//end for i
}//end copiarVetor

void imprimirVetor(int *ptr, int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
      cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
}