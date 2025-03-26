//
// Created by Lucas Kenzo Kuroki
//

#ifndef CURSOPROPRIO_HPP
#define CURSOPROPRIO_HPP

//-----------------------------------------------
//BIBLIOTECAS
//-----------------------------------------------
#include "Cursos.hpp"

//-----------------------------------------------
//Classe para cursos proprios
//-----------------------------------------------
class CursoProprio: public Cursos
{
    public:
      CursoProprio(const string &curso, const string &empresa, double valor=0);    //construtor passa o valor
      void setValorCurso(double valor);                                            //funcao membro para calcular valor
      double getValorCurso() const;                                                //função membro para retorno do valor

      virtual double calculaLucro() const;                                        //função virtual que sobreescreve a função classe basica
      virtual void mostraValores() const;                                         //Função virtual para imprimir os valores

    private:
      double _valorCurso;
};



#endif //CURSOPROPRIO_HPP
