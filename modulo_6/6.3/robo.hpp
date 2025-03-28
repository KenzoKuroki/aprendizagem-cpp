//
// Created by Lucas Kenzo Kuroki
//

#ifndef ROBO_HPP
#define ROBO_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;


class Robo {
    public:
      Robo(const string &type, const string &name, const string &function, int x, int y);
      void setType(const string &type);
      string getType() const;
      void setName(const string &name);
      string getName() const;
      void setFunction(const string &function);
      string getFunction() const;
      void setX(int x);
      int getX() const;
      void setY(int y);
      int getY() const;

      virtual int calculateLocation();
      virtual void printStatus() const;

    private:
      string _tipo;
      string _name;
      string _function;
      int _X;
      int _Y;
};



#endif //ROBO_HPP
