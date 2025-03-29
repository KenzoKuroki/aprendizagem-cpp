//
// Created by Lucas Kenzo Kuroki
//

#ifndef DESLOCAARRAY_HPP
#define DESLOCAARRAY_HPP

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template<typename LK, unsigned short TAM>
class DeslocaArray {
    public:
      DeslocaArray();

      void shiftArray(LK array[TAM]);
      void printArray();
    private:
      LK _array[TAM];

};

#include "DeslocaArray.cpp"

#endif //DESLOCAARRAY_HPP
