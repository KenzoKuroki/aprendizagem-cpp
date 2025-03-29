//
// Created by Lucas Kenzo Kuroki
//

#ifndef VET3D
#define VET3D

#include <iostream>
using std::cout;
using std::endl;

class Vet3d {
    public:
      Vet3d(int = 0, int = 0, int = 0);
      Vet3d operator+(Vet3d); //sobrecarga do operador +

      int getX() const;
      int getY() const;
      int getZ() const;

    private:
        int x, y, z;
};//end class



#endif
