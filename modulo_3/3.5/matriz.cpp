// 3.5 -
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;


int main()
{
  int A[4][4];

  int myArray [3][4] = {1,2,3,4,
                        5,6,7,8,
                        9, 10, 11, 12};

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      A[i][j] = i + j;
    }
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}