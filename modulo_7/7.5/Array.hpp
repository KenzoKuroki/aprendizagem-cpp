//  7.5 - Classe String para estudo de
//  sobrecarga de operadores
// Lucas Kenzo Kuroki
//  bas. DEITEL

#ifndef  ARRAY
#define  ARRAY


// ==============================================
#include <iostream>
using std::ostream;
using std::istream;


// ==============================================
class Array
{
  friend ostream &operator<<(ostream &, const Array &);
  friend istream &operator>>(istream &, Array &);

  public:
    Array(int=10);          //construtor
    Array(const Array &);   //construtor de copia
    ~Array();               //destrutor

    int getSize() const;    //retorna o tamanho do array

    const Array &operator=(const Array &);      //operador de atribuicao
    bool operator==(const Array &) const;       //operador de igualdadade
    bool operator!=(const Array &) const;       //operador de desigualdade

    int &operator[](int);       //operador subscrito de objetos nao const retorna lvalue modificavel
    int operator[](int) const;  //operador de subscrito de objetos const retorna rvalue

  private:
    int sizeA;                  //tamanho do array baseado em ponteiro
    int *ptr;                   //ponteiro para o primeiro elemento do array baseado em ponteiro

}; //end class Array


#endif // ARRAY