//
// Created by Lucas Kenzo Kuroki
//

//==========================================
//bibliotecas
//==========================================
#ifndef SENSVOLT_HPP
#define SENSVOLT_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setprecision;

//==========================================
//classe
//==========================================
class sensVolt {
    public:
      sensVolt(const string &sensType, int valorADC, unsigned sensId , double Vref);
      void setSensType(const string &sensType);
      string getSensType() const;
      void setValorADC(int valorADC);
      int getValorADC() const;
      void setSensId(unsigned sensId);
      unsigned getSensId() const;
      void setVref(double Vref);
      double getVref() const;
      double voltsVal() const;
      void dispResults() const;

    private:
      string _sensType;
      int _valorADC;
      unsigned _sensId;
      double _Vref;
};//end classe sensVolt



#endif //SENSVOLT_HPP
