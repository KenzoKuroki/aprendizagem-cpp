//
// Created by Lucas Kenzo Kuroki
//

#ifndef ADJUST_H
#define ADJUST_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;

class Adjust {
    public:
      Adjust(int = 50, int = 50, int = 50);
      Adjust &setAdj(int v, int b, int c);
      Adjust &setVolume(int);
      Adjust &setBrilho(int);
      Adjust &setContraste(int);
      void dispParam() const;
    private:
      int volume;
      int brilho;
      int contraste;
};



#endif //ADJUST_H
