// 1.2
// Created by Lucas Kenzo Kuroki
//

#include <iostream>

int main()
{
    int num1, num2, soma, multiplicacao, divisao, subtracao;
    std::cout << "Digite dois numeros: ";
    std::cin >> num1 >> num2;
    std::cout << std::endl;

    soma = num1 + num2;
    divisao = num1 / num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    std::cout << "Operações: " << std::endl;
    std::cout << "Resultado de: " << num1 << " + " << num2 << " = " << soma <<std::endl;
    std::cout << "Resultado de: " << num1 << " - " << num2 << " = " << subtracao <<std::endl;
    std::cout << "Resultado de: " << num1 << " * " << num2 << " = " << multiplicacao <<std::endl;
    std::cout << "Resultado de: " << num1 << " / " << num2 << " = " << divisao <<std::endl;

    std::cout << "Comparações: " << std::endl;
    if (num1>num2) std::cout << "O primeiro numero é maior!" << std::endl;
    else if (num1 < num2) std::cout << "O primeiro numero é menor!" << std::endl;
    else std::cout << "Os dois são iguais" << std::endl;

    return 0;

}