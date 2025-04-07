// 8.2 - criar sobrecarga para manipular fluxos
// Created by Lucas Kenzo Kuroki
//

#include "manipulacao.hpp"

//funcao para criar quatro espacos em branco
ostream &space4(ostream &os) {
    return os << "    ";
}//end space 4

//funcao para criar oito espacos em branco
ostream &space8(ostream &os){
  return os << "        ";
}//end space 8

//funcao para criar emitir alert
ostream &alert(ostream &os){
    return os << '\a';
}//end alert

//funcao para gerar duas linhas
ostream &twoLines(ostream &os){
    return os << '\n' << '\n';
}//end two lines
