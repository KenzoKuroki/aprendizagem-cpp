//
// Created by Lucas Kenzo Kuroki
//

#include "Mem_aleatorio.h"

Memoria::Memoria()
{
  gerarRaizAleatoria();
  selectComand();
}// end memoria

Memoria::~Memoria(){}
void Memoria::gerarMemoria(int *memoria)
{
  for(int i = 0; i < TAMBUFFER; i++){
    memoria[i] = rangeRand(0, 255);
  }
}//end gerarMemoria
void Memoria::imprimirMemoria()
{
  cout << "Memoria 1:" << endl;
  for(int i = 0; i < TAMBUFFER; i++){
    cout << "ADDR "<< setw(2) << i << " content: " << memoria1[i] << endl;
  }
  cout << "Memoria 2:" << endl;
  for(int i = 0; i < TAMBUFFER; i++){
    cout << "ADDR " << setw(2) << i << " content: " << memoria2[i] << endl;
  }

}//end imprimirMemoria
void Memoria::selectComand()
{
  char cmd = ' ';
  do{
    gerarMemoria(memoria1);
    gerarMemoria(memoria2);
    imprimirMemoria();

    cout << "Recarregar memorias? (y) sim e (N) não: ";
    cin >> cmd;
    cout << endl;
  }while(cmd != 'n' && cmd != 'N');

}//end select comand

void Memoria::gerarRaizAleatoria(){
  srand(time(0));
}//end gerarRaizAleatoria

unsigned Memoria::rangeRand (unsigned first, unsigned range){
  return first + (rand()%(range + 1 - first));
}//end reangeRand