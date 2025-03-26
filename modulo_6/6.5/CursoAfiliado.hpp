//
// Created by Lucas Kenzo Kuroki
//

#ifndef CURSOAFILIADO_HPP
#define CURSOAFILIADO_HPP

//-----------------------------------------------
//BIBLIOTECAS
//-----------------------------------------------
#include "Cursos.hpp"

//-----------------------------------------------
//Classe para cursos afiliados
//-----------------------------------------------
class CursoAfiliado : public Cursos
{
    public:
        CursoAfiliado(const string &curso, const string &empresa,
                    double taxa=0.0, int quantidade=0);                    //construtor passa a taxa e a quantidade
        void setTaxa(double taxa);                                         //funcao membro para definir a taxa
        double getTaxa() const;                                            //função membro para retorno da taxa
        void setQuantidade(int quantidade);                                //Função membro para setar a quantidade
        int getQuantidade() const;                                         //Função membro para pegar a quantidade

        virtual double calculaLucro() const;                               //função virtual que sobreescreve a função classe basica
        virtual void mostraValores() const;                                //Função virtual para imprimir os valores do curso afiliado

    private:
        double _taxa;
        int _quantidade;
};



#endif //CURSOAFILIADO_HPP
