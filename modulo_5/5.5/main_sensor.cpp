//
// Created by Lucas Kenzo Kuroki
//

#include "Sensor.h"

int main(){
  int nivel = 0;
  char comand = 'y';
  Sensor controller1, controller2, controller3, controller4;
  do{

    cout << "DIGITE UM VALOR DE 0 A 100: " << endl;
    cin >> nivel;
    cout << "============================" << endl;
    cout << "Controlador 1: " << endl;
    controller1.setSensLevel(nivel);
    controller1.imprimeVolume();
    cout << "============================" << endl;

    cout << "Controlador 2: " << endl;
    controller2.setSensLevel(nivel);
    controller2.imprimeVolume();
    cout << "============================" << endl;

    cout << "Controlador 3: " << endl;
    controller3.setSensLevel(nivel);
    controller3.imprimeVolume();
    cout << "============================" << endl;

    cout << "Controlador 4: " << endl;
    controller4.setSensLevel(nivel);
    controller4.imprimeVolume();
    cout << "============================" << endl;

    cout << "Continuar? Digite (y) para sim e (n) para nao: " << endl;
    cout << ">>> ";
    cin >> comand;
  }while(comand != 'n' && comand != 'N');

  return 0;

}