// 5.4 - Implementando funções para calcular a area de um quadrado menos um semicirculo
// Created by Lucas Kenzo Kuroki
//

#include "Area.h"

Area::Area(double p1, double p2, double p3){
    setParams(p1, p2, p3);
}//end construtor Area

Area &Area::setParams(double d, double b, double h){
  setDiametro(d);
  setBaseAltura(b, h);
  return *this;
}//end setParams

Area &Area::setDiametro(double d){
  diametro = (d >= 0)?d:0.0;
  return *this;
}//end setDiametro

Area &Area::setBaseAltura(double b, double h){
  base = (b>=0)?b:0.0;
  altura = (h>=0)?h:0.0;
  return *this;
}//end setBaseAltura

void Area::calcArea(){
    area = (base*altura)-(M_PI*diametro*diametro/8); //area quadrado(base*altura) - (area da metade de um circulo)
                                                     //usa diametro portanto divide por 4 e como é um semi-circulo divide por 8
}//end calcArea

void Area::printArea() const{
  cout << setw(10) << "Diametro: " << diametro << endl;
  cout << setw(10) << "Base: " << base << endl;
  cout << setw(10) << "Altura: " << altura << endl;
  cout << setw(10) << "Area: " << area << endl;
}//end print area