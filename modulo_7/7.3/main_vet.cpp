//
// Created by Lucas Kenzo Kuroki.
//

#include "Vet3d.hpp"

int main()
{

  Vet3d P1(1,2,3),
        P2(3,4,5),
        P3;

  P3=P1+P2;

  cout << "P3("
       << P3.getX() << ','
       << P3.getY() << ','
       << P3.getZ() << ")\n" << endl;

  cout << "FIM!!";
  return 0;

}
