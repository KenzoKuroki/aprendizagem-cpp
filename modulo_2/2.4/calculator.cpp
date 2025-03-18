// 2.4 - Implementação da calculadora - switch e do while
// inicia bootSystem com mensagem padrao, inicia fluxo com exibeMenu
// coleta os operandos e a operacao. Na exibição passa operacao por switch case e retorna calculos
// imprime e verifica se usuario deseja continuar
//
// Created by Lucas Kenzo Kuroki
//

#include "calculator.h"

void Calculadora::bootSystem()
{
  cout << "Calculadora Simples" << endl;
  flag = 1;
}//end bootSystem

void Calculadora::exibeMenu()
{
    getNumeros();
    getOperacao();
}//end exibeMenu

void Calculadora::getNumeros()
{
    cout << "Digite o primeiro operando: ";
    cin >> numeroA;
    cout << "\nDigite o segundo operando: ";
    cin >> numeroB;

}//end getNumero

void Calculadora::getOperacao()
{
    cout << "Escolha uma operacao: " << endl;
    imprimeOperacoes();
    cin >> operacao;
}//end getOperacao

void Calculadora::imprimeOperacoes()
{
  cout << "+ : Somar       (operandoA + operandoB)" << endl;
  cout << "- : Subtrai r   (operandoA - operandoB)" << endl;
  cout << "* : Multiplicar (operandoA * operandoB)" << endl;
  cout << "/ : Dividir     (operandoA / operandoB)" << endl;
  cout << "^ : Potencia    (operandoA ^ operandoB)" << endl;
}//end imprimeOperacoes

double Calculadora::calcular(char op, double numA, double numB)
{
    switch(op)
    {
        case '+':
            return numA + numB;
        break;
        case '-':
          return numA - numB;
        break;
        case '*':
          return numA * numB;
        break;
        case '/':
          return numA / numB;
        break;
        case '^':
          return pow(numA, numB);
        break;
        default:
          cout << "Operacao invalida" << endl;
          return 0;
    }//end switch
}//end calcular

void Calculadora::exibeResultado()
{
    cout << "\nResultado: " << numeroA << operacao << numeroB << " = " << calcular(operacao, numeroA, numeroB) << endl;
}

int Calculadora::getContinue()
{
    cout << "Deseja continuar? (1 - sim, 0 - nao): ";
    cin >> flag;
    if(flag == 0) cout << "Saindo..." << endl;
    return flag;
}//end getContinue