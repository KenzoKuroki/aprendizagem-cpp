//
// Created by Lucas Kenzo Kuroki
//

#include "Cursos.hpp"
#include "CursoProprio.hpp"
#include "CursoAfiliado.hpp"
#include "CursoCoproduzido.hpp"

void chamadawPointer(const Cursos *const);

int main()
{
  cout << fixed << setprecision(2);


  CursoProprio cursoProgramacao("Aprenda a Programar", "HB", 129.99);
  CursoAfiliado cursoIngles("Ingles completo", "Language Inc", 0.3, 150);
  CursoCoproduzido cursoMecatronica("Curso de robotica", "Wr", 0.5, 220, 227.0);

  CursoProprio *programacaoPtr = 0;
  CursoAfiliado *inglesPtr = 0;
  CursoCoproduzido *mecaPtr = 0;

  cursoProgramacao.mostraValores();
  cout << "\nLucro curso proprio: " << cursoProgramacao.calculaLucro() << endl;

  cursoIngles.mostraValores();
  cout << "\nLucro curso afiliado: " << cursoIngles.calculaLucro() << endl;

  cursoMecatronica.mostraValores();
  cout << "\nLucro curso coproduzido: " << cursoMecatronica.calculaLucro() << endl;

  cout << "============================================" << endl;

  //ponteiros apontando para os objetos
  programacaoPtr = &cursoProgramacao;
  inglesPtr = &cursoIngles;
  mecaPtr = &cursoMecatronica;

  chamadawPointer(programacaoPtr);
  chamadawPointer(inglesPtr);
  chamadawPointer(mecaPtr);

  cout << "\nFIM" << endl;
  return 0;
}

void chamadawPointer(const Cursos *const classeBasicaPtr)
{
  classeBasicaPtr->mostraValores();
  cout << "\nLucro curso coproduzido: " << classeBasicaPtr->calculaLucro() << endl;

}