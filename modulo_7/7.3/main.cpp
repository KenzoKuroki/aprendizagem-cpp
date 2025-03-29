//
// Created by Lucas Kenzo Kuroki
//

#include "Pot.hpp"

int main()
{

  Pot base(3);
  int expo;
  int res;

  expo = 2;
  res = base^expo;
  cout << res << endl;

  base.setBase(10);
  expo = 4;
  res = base^expo;
  cout << res << endl;

  cout << "\nFIM";

  return 0;
}