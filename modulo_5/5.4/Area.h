// 5.4 - exercicio para permitir o uso de funções em cascata
// Visa coletar o diametro, a altura de um quadrado e o diametro de um circulo circunscrito nesse quadrado
// E retorna a area desta figura, ou seja, area do quadrado - metade da area do circulo
// Created by Lucas Kenzo Kuroki
//

#ifndef AREA_H
#define AREA_H

//bibliotecas utilizadas:
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;

//classe da area
class Area {
    public:
        Area(double = 0.0,double = 0.0,double = 0.0);        //construtor
        Area &setParams(double d, double b, double h);       //função-membro que chama as funções setDiametro e setbasealtura
        Area &setDiametro(double);                           //função-membro que atribui valor ao diametro
        Area &setBaseAltura(double, double);                 //função-membro que atribui os valores da base e da altura

        void calcArea();                                    //função-membro que realiza o calculo(area do quadrado - area do circulo/2)
        void printArea() const;                             //função-membro que imprime os parametros para os calculos e a area final
    private:
        double diametro;
        double base;
        double altura;
        double area;
};



#endif //AREA_H
