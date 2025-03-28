// 7.1 - exercicio exemplo - codigo que criptografa varios tipos de dados
// Created by Lucas Kenzo Kuroki
//

//===========================================================================
//Bibliotecas:
#include <iostream>
using std::cout;
using std::endl;
//===========================================================================

//===========================================================================
//Prototipos de funções:
template <typename newType>
void criptografaArray(newType *myArray, int arraySize);
//===========================================================================

//===========================================================================
//função principal:
int main(){

  const int arraySize = 5;

  int array[arraySize] = {1, 2, 3, 4, 5};
  char array1[arraySize] = {'a','b','c','d','e'};
  double array2[arraySize] = {1.0, 2.0, 3.0, 4.0, 5.0};
  criptografaArray(array, arraySize);
  criptografaArray(array1, arraySize);
  criptografaArray(array2, arraySize);

  return 0;

}//end main

//===========================================================================
//Desenvolvimento de funções:
template <typename newType>
void criptografaArray(newType *myArray, int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    if(i%2)
      myArray[i] += 5;
    else
      myArray[i] += 3;
  } //end for
  for(int i =0; i < arraySize; i++)
    cout << myArray[i] << " ";
  cout << endl;
}//end criptografiaArray
//===========================================================================