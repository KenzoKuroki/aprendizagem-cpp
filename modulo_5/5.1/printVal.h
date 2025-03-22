//
// Created by Lucas Kenzo Kuroki on 22/03/25.
//

#ifndef PRINTVAL_H
#define PRINTVAL_H

#include <iostream>
using std::cout;
using std::endl;


class PrintVal {
    public:
      PrintVal();
      void setValue(int value);
      void printValue();
    private:
      int valueToPrint;
};



#endif //PRINTVAL_H
