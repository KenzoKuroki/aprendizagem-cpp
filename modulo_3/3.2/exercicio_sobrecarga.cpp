// 3.2 - Desenvolver uma função que imprime até 4 parametros de qualquer tipo
// Created by Lucas Kenzo Kuroki
//

//=============================================
//Bibliotecas
//=============================================

#include <iostream>
using std::cout;
using std::endl;

//=============================================
//Prototipos de funções
//=============================================

template <typename TIPO>
TIPO imprimir(TIPO a, TIPO b, TIPO c, TIPO d);        //imprime quatro parametros
template <typename TIPO>
TIPO imprimir(TIPO a, TIPO b, TIPO c);                //imprime três parametros
template <typename TIPO>
TIPO imprimir(TIPO a, TIPO b);                        //imprime dois parametros
template <typename TIPO>
TIPO imprimir(TIPO a);                                //imprime um parametro

//=============================================
//função principal
//=============================================

int main()
{
    imprimir("-------------------");
    imprimir(1, 2, 3, 4);
    imprimir("-------------------");
    imprimir(2.6, 3.5, 4.4);
    imprimir("-------------------");
    imprimir('a', 'b', 'c', 'd');
    imprimir("-------------------", "-----", "-------------------");


    return 0;

}

//=============================================
// Desenvolvimento de funções
//=============================================
template <typename TIPO>
TIPO imprimir(TIPO a, TIPO b, TIPO c, TIPO d)
{
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
}

template <typename TIPO>
TIPO imprimir(TIPO a, TIPO b, TIPO c)
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

template <typename TIPO>
TIPO imprimir(TIPO a, TIPO b)
{
    cout << a << endl;
    cout << b << endl;
}

template <typename TIPO>
TIPO imprimir(TIPO a)
{
    cout << a << endl;
}

