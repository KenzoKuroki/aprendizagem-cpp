//
// Created by Lucas Kenzo Kuroki
//

#ifndef SENSCURRENT_HPP
#define SENSCURRENT_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "sensVolt.hpp"

class sensCurrent : public sensVolt
{
    public:
        sensCurrent(const string &sensType, int valorADC, unsigned sensId , double Vref, double res);
        ~sensCurrent();
        void setRes(double res);
        double getRes() const;

        double currentVal() const;
        virtual void dispResults() const;
    private:
      double _res;
};



#endif //SENSCURRENT_HPP
