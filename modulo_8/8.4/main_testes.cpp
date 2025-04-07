// 8.4 - Tratamento de Excessoes
// Created by Lucas Kenzo Kuroki
//

//=====================================
//bibliotecas
#include "ArrayLimit.hpp"

//=====================================
// prototipos de funcoes
int enterIndex(int index);

//=====================================
//funcao principal
int main(){
    int a1[10] = {0};
    int index, content;

    while(true){
      cout << "Please enter an index (0 - 9): ";
      cin >> index;

      try{
        index = enterIndex(index);
      }
      catch(ArrayLimit& e){
        cout << "Error: " << e.what() << endl;
        continue;
      }

      cout << "Enter the content of array[" << index << "] = ";
      cin >> content;

      a1[index] = content;


      cout << "\nConteudo atual do Array: " << endl;
      for(int i = 0; i < 10; i++){
        cout << ' ' << a1[i];
      }
      cout << endl;

    }//end while


  return 0;
}

//=====================================
// Desenvolvimento de funcoes
int enterIndex(int index){
  if(index < 0 || index > 9){
     throw ArrayLimit();
  }
  return index;
}// endenter index


