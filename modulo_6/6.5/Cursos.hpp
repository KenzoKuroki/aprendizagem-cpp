// 6.5 -
// Created by Lucas Kenzo Kuroki
//

#ifndef CURSOS_HPP
#define CURSOS_HPP

//-----------------------------------------------
//BIBLIOTECAS
//-----------------------------------------------
#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
//-----------------------------------------------
//
//-----------------------------------------------



//-----------------------------------------------
// Classe
//-----------------------------------------------
class Cursos {
    public:
      Cursos(const string &curso, const string &empresa);        //construtor

      void setNomeCurso(const string &curso);                    //função-membro para configura o nome do curso
      string getNomeCurso() const;                               //função-membro que retorna o nome do curso
      void setNomeEmpresa(const string &empresa);                //função-membro que configura o nome da empresa
      string getNomeEmpresa() const;                             //função-membro que retorna o nome da empresa

      virtual double calculaLucro() const = 0;                   //função virtual basica para calcular lucros
      virtual void mostraValores() const;                        //função virtual basica para imprimir os resultados

    private:
      string _curso;
      string _empresa;
};



#endif //CURSOS_HPP
