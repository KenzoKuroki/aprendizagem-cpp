// funcao principal, instancia a classe equacao
// cria a reta passando parametros dos coeficientes no construtor
// escolhe os valores iniciais e finais de x
// Created by Lucas Kenzo Kuroki
//

#include "condicao_for.h"

int main()
{
    Equacao myEquacao(4, 53);             //y = 4x - 53
    myEquacao.imprimeEquacao(-12, 47);    // varia x de -12 a 47 e imprime os valores

    return 0;
}