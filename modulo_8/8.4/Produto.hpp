//
// Created by Lucas Kenzo Kuroki
//

#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <stdexcept>
using std::runtime_error;

class Produto : public runtime_error{
    public:
        Produto(): runtime_error("Limite de memoria alcancado, max 16bits") {}
};



#endif //PRODUTO_HPP
