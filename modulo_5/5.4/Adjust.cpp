//
// Created by Lucas Kenzo Kuroki
//

#include "Adjust.h"

Adjust::Adjust(int volume, int brilho, int contraste){
    setAdj(volume, brilho, contraste);
}

Adjust &Adjust::setAdj(int volume, int brilho, int contraste){
    setVolume(volume);
    setBrilho(brilho);
    setContraste(contraste);
    return *this;
}//end setAdj

Adjust &Adjust::setVolume(int vol){
  volume = (vol >= 0 && vol <= 100)?vol: 50;
  return *this;
}

Adjust &Adjust::setBrilho(int bri){
  brilho = (bri >= 0 && bri <= 100)?bri: 50;
  return *this;
}
Adjust &Adjust::setContraste(int con){
  contraste = (con >= 0 && con <= 100)?con: 50;
  return *this;
}

void Adjust::dispParam() const
{
    cout << setw(21) << "Volume is set to: " << volume << '%' <<endl;
    cout << setw(21) << "Brilho is set to: " << brilho << '%' << endl;
    cout << setw(21) << "Contraste is set to: " << contraste << '%' << endl;
}