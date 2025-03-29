//
// Created by Lucas Kenzo Kuroki
//

#ifndef POT_HPP
#define POT_HPP

#include <cmath>
using std::pow;

#include <iostream>
using std::cout;
using std::endl;


class Pot {
    public:
        Pot(int =1);
        int operator^(int val);
        void setBase(int =1);

    private:
      int _base;
};



#endif //POT_HPP
