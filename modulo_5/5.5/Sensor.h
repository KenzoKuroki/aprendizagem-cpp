//
// Created by Lucas Kenzo Kuroki
//

#ifndef SENSOR_H
#define SENSOR_H


#include <iostream>
using std::cout;
using std::endl;
using std::cin;


class Sensor {
    public:
      Sensor(int=0);
      void imprimeVolume() const;
      static void setSensLevel(int level);
    private:
      static int _level;

};



#endif //SENSOR_H
