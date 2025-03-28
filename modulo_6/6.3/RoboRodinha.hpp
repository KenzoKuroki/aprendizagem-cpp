//
// Created by Lucas Kenzo Kuroki
//

#ifndef ROBORODINHA_HPP
#define ROBORODINHA_HPP

#include "robo.hpp"

class RoboRodinha {

  public:
    virtual int calculateLocation();
    virtual void printStatus() const;
    
  private:
    int cordenada[1];
};



#endif //ROBORODINHA_HPP
