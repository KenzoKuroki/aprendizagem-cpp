// 8.5 - Programa para usar o bad aloc e emitir excecoes na alocacao de memoria
// Created by Lucas Kenzo Kuroki
//

// ====================================
// Bibliotecas
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new>
using std::bad_alloc;

// ====================================
// Prototipos de funcoes
double *newAlloc(const uint64_t memSize);

// ====================================
// funcao principal
int main(){
  double *palloc;
  palloc = newAlloc(10000000000);

  cout << "\nFIM" << endl;
  return 0;
}//end funcao principal

// ====================================
// Desenvolvimento de funcoes
double *newAlloc(const uint64_t memSize){
  double *pallocAux;
  try{
    pallocAux = new double[memSize];
    cout << "Memoria criada com sucesso!" << endl;
  }
  catch(bad_alloc &e){
    cout << "Erro, falha ao alocar memoria " << e.what() << endl;
  }
  return pallocAux;
}

