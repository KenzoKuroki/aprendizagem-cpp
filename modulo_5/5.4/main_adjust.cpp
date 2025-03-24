//
// Created by Lucas Kenzo Kuroki
//

#include "Adjust.h"

int main(){

  Adjust user1, user2, user3, user4(87);
  cout << "===========================" << endl;
  cout << "User 1 PARAM:\n";
  cout << "---------------------------" << endl;
  user1.setVolume(30).setBrilho(37).setContraste(42);
  user1.dispParam();

  cout << "===========================" << endl;
  cout << "User 2 PARAM:\n";
  cout << "---------------------------" << endl;
  user2.setVolume(79).setBrilho(12).setContraste(35);
  user2.dispParam();


  cout << "===========================" << endl;
  cout << "User 3 PARAM:\n";
  cout << "---------------------------" << endl;
  user3.setVolume(220).setBrilho(145).setContraste(-3);
  user3.dispParam();

  cout << "===========================" << endl;
  cout << "User 4 PARAM:\n";
  cout << "---------------------------" << endl;
  user4.dispParam();
  cout << "===========================" << endl;


  cout << "\n\nFIM" << endl;
  return 0;
}