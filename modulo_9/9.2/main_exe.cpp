// 9.2 - exercicio arquivo input
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::cerr;

#include <cstdlib>
using std::exit;
#include <fstream>
using std::ifstream;
using std::ofstream;

int main(){
    char str[25], id[15];
    int digito1 = 0, digito2 = 0;
    double valor;

    cout << "Digite o nome do arquivo para ler: ";
    cin >> str;
    ifstream ArqR(str, ios::in);
    if(!ArqR){
        cerr << "Error reading file" << endl;
        exit(1);
    }

    while(!ArqR.eof()){
      ArqR >> id >> digito1 >> digito2 >> valor;
      cout << id << ' ' << digito1 << ' ' << digito2 << ' ' << valor << endl;
    }

    return 0;
}