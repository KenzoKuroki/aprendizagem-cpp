//
// Created by Lucas Kenzo Kuroki on 09/04/25.
//

#ifndef ALIMENTOS_HPP
#define ALIMENTOS_HPP

#include <string>
using std::string;

#include <cstring>
using std::strncpy;


class Alimentos {
    public:
      Alimentos(uint16_t ID = 0, string food = "", double prot = 0.0, double carb = 0.0, double fats = 0.0);

      void setId(uint16_t ID);
      uint16_t getId() const;
      void setFood(string food);
      string getFood()const;
      void setProt(double prot);
      double getProt()const;
      void setCarb(double carb);
      double getCarb()const;
      void setFats(double fats);
      double getFats()const;

    private:
      uint16_t _ID;
      char _food[40];
      double _prot,
             _carb,
             _fats;
};



#endif //ALIMENTOS_HPP
