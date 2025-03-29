//
// Created by Lucas Kenzo Kuroki on 28/03/25.
//

#include "DeslocaArray.hpp"

int main(){

  const unsigned int size1 = 5;
  const unsigned int size2 = 5;

  DeslocaArray<int, size1> des1;
  DeslocaArray<char, size2> des2;

  int array[size1] = {1,2,3,4,5};
  char array2[size2] = {'a','b','c','d','e'};

  des1.shiftArray(array);
  des1.printArray();

  des2.shiftArray(array2);
  des2.printArray();

  return 0;
}