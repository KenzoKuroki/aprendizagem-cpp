// 11.1 - pesquisa binaria feito durante a aula
// Created by Lucas Kenzo Kuroki
//

#include "PesquisaBinaria.hpp"

int main(){
    int minhaChave;
    int indice;
    int tamanho;

    cout << "Insira o numero de elementos: ";
    cin >> tamanho;

    PesquisaBinaria meuVetor(tamanho);
    meuVetor.imprimeVetor();

    while(1){
      cout << "Insira o valor da chave que deseja pesquisar: ";
      cin >> minhaChave;

      indice = meuVetor.pesquisa(minhaChave);

      if(indice != -1){
        cout << "Chave: " << minhaChave << " encontrada!" << endl;
      }else{
        cout << "Chave: " << minhaChave << " inexistente." << endl;
      }
    }
    return 0;
}