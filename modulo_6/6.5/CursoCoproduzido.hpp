//
// Created by Lucas Kenzo Kuroki
//

#ifndef CURSOPRODUZIDO_HPP
#define CURSOPRODUZIDO_HPP

#include "CursoAfiliado.hpp"

class CursoCoproduzido : public CursoAfiliado
{
    public:
        CursoCoproduzido(const string &curso, const string &empresa,
                       double taxa=0.0, int quantidade=0, double valorFixo=0.0);     //construtor passa o valor

        void setValorFixo (double valorFixo);                                        //funcao membro para setar valor
        double getValorFixo() const;                                                 //função membro para retorno do valor

        virtual double calculaLucro() const;                                        //função virtual que sobreescreve a função classe basica
        virtual void mostraValores() const;                                         //Função virtual para imprimir os valores

    private:
        double _valorFixo;
};



#endif //CURSOPRODUZIDO_HPP
