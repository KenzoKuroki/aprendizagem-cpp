//
// Created by Lucas Kenzo Kuroki
//

#include "PesquisaBinaria.hpp"

PesquisaBinaria::PesquisaBinaria(int sizeVector){
  _sizeVector = (sizeVector>0?sizeVector:2);

  for(int i=0; i<(_sizeVector/2); i++){
    dados.push_back(i+i/2);
  }
  for(int i=(_sizeVector/2); i<_sizeVector; i++){
    dados.push_back(i+i/2+i/3);
  }
  sort(dados.begin(), dados.end());
}

void PesquisaBinaria::imprimeVetor() const{
  for(int i=0,cnt =0; i<=(_sizeVector-1); i++){
    cout << setw (4) << dados[i];
    cnt++;
    if(cnt > 19){
      cout << '\n';
      cnt = 0;
    }
    else
      cout << ' ';

  }
  cout << endl;
}

int PesquisaBinaria::pesquisa(int chave) const{
  int metadeInit = 0;
  int metadeFinal = _sizeVector-1;

  int centro = (metadeFinal+metadeInit)/2;
  int indice = -1;

  while((metadeInit<=metadeFinal) && (indice==-1)){
    cout << "oi" << endl;
    if(chave == dados[centro])
      indice = centro;
    else if(chave < dados[indice])
      metadeFinal = centro-1;
    else
      metadeInit = centro+1;

    centro = (metadeFinal+metadeInit+1)/2;
  }//end while

  return indice;
}