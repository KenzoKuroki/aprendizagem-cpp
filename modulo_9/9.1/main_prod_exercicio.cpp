//
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::endl;
using std::cin;
using std::cout;
using std::ios;
using std::cerr;
using std::fixed;

#include <cstdlib>
using std::exit;

#include <fstream>
using std::ofstream;

#include <iomanip>
using std::setprecision;

int main(){
    int max = 0;
    char nome[20];
    int quantidade = 0;
    double valor = 0.0;
    double resultado = 0.0;
    ofstream ArqW("arquivoProdutos.txt", ios::out);
    if(!ArqW){
        cerr << "Error opening file" << endl;
        exit(1);
    }

    cout << "Digite a quantidade de produtos:";
    cin >> max;
    cout << "\nDigite o nome do produto, quantidade e valor do produto:" << endl;

    ArqW << "NOME    QTD    VALOR    SUBTOTAL" << endl;
    ArqW << "--------------------------------" << endl;
    for(int i = 0; i < max; i++){
          cout << "Produto " << i+1 << '/' << max << ": ";
          cin >> nome >> quantidade >> valor;

          resultado += (valor*quantidade);
          ArqW << nome << ' ' << quantidade << ' ' << valor << endl; ;
    }
    ArqW << "--------------------------------" << endl;
    ArqW << "TOTAL:" << resultado << endl;
    cout << "Arquivo criado com sucesso!" << endl;
//    ArqW << fixed;
//    ArqW << setprecision(5) << f << "Hz" << endl;


    ArqW.close();

    return 0;
}