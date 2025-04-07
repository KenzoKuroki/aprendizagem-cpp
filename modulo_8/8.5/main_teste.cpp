// 8.5 - Alocacao de memoria
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new>
using std::bad_alloc;
using std::set_new_handler;
#include <cstdlib>
using std::abort;

void handler();

int main(){
  double *palloc = {};

  // try{
  //   palloc = new double[50000];
  //   cout << "Memoria alocada com sucesso!";
  //
  // }
  // catch(bad_alloc& e){
  //   cerr << "Error, falha ao alocar memoria: " << e.what() << endl;
  // }

  set_new_handler(handler);
  palloc = new double[500000];// se falhar ele encerra antes!
  cout << "Memoria criada com sucesso!" << endl;


  cout << "\nFIM" << endl;
  return 0;
}

void handler() {
  cout << "Falha ap alocar memoria! " << endl;
  abort();
}