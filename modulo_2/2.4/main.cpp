// Função principal - utilizando doWhile para calculadora interativa
// Created by Lucas Kenzo Kuroki
//

#include "calculator.h"

int main(){
    int flag = 1;
    Calculadora myCalc;
    myCalc.bootSystem();

    do{
        myCalc.exibeMenu();
        myCalc.exibeResultado();
        flag = myCalc.getContinue();

    }while(flag != 0);

    return 0;
}