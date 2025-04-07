//
// Created by Lucas Kenzo Kuroki
//

#ifndef ARRAYLIMIT_HPP
#define ARRAYLIMIT_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <stdexcept>
using std::runtime_error;

class ArrayLimit : public runtime_error {
  public:
    ArrayLimit(): runtime_error("Array fora do limite") {}
};



#endif //ARRAYLIMIT_HPP
