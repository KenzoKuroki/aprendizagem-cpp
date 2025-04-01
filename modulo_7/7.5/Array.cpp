// 7.5 sobrecarga de operadores
// Lucas Kenzo Kuroki
//  bas. DEITEL

// ==============================================
// Bibliotecas
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::exit;

#include "Array.hpp"


// ==============================================
//Construtor padrao
Array::Array(int arraySize)
{
  sizeA = (arraySize > 0 ? arraySize : 10);
  ptr = new int[sizeA]; //aloca espaco na mem para o array

  for(int i=0; i<sizeA; i++)
    ptr[i] = 0;

} //end construtor original


// ==============================================
// Construtor de copia
// Copia o construtor da classe Array
// deve receber uma ref para impedir a recursao infinita
Array::Array(const Array &arrayToCopy):
sizeA(arrayToCopy.sizeA)
{
  ptr = new int[sizeA];  //aloca de memoria para o array

  for(int i=0; i<sizeA; i++)
    ptr[i] = arrayToCopy.ptr[i]; //copia para o objeto

} //end construtor de c�pia


// ==============================================
// Destrutor
Array::~Array()
{
  delete [] ptr;
}


// ==============================================
// Retorna o numero de elementos do Array
int Array::getSize() const
{
  return sizeA;
}

// ==============================================
// Operador de atribuicao sobrecarregado
const Array &Array::operator=(const Array &right)
{
  if(&right != this) //evita auto-atribuicao
  {
    //para arrays de tamanhos diferentes, desacola array do lado esquerdo
    //original, entao aloca o novo array a esquerda
    if(sizeA != right.sizeA)
    {
      delete [] ptr;        //libera espaco
      sizeA = right.sizeA;  //redimensiona esse objeto
      ptr = new int[sizeA]; //cria espaco para copia do array

    } //end if interno

    for(int i=0; i<sizeA; i++)
      ptr[i] = right.ptr[i]; //copia array para o objeto

  } //end if

  return *this;  //permite atrib em cascata

} //end operator=


// ==============================================
// Operador de igualdade sobrecarregado
bool Array::operator==(const Array &right) const
{
  if(sizeA != right.sizeA)
    return false;             //arrays com numeros diferentes de elementos

  for(int i=0; i<sizeA; i++)
    if(ptr[i]!=right.ptr[i])
      return false;           //arrays com conte�dos diferentes

  return true;                //arrays sao iguais

} //end operator==


// ==============================================
//Operador de desigualdade sobrecarregado
bool Array::operator!=(const Array &right) const
{
  return !(*this == right); //invoca Array::operator==
} //end operator!=


// ==============================================
// Operador de subscrito sobrecarregado para Arrays nao constante
int &Array::operator[](int subscript)
{
  //verifica erro de subscrito fora do intervalo
  if(subscript < 0 || subscript >= sizeA)
  {
    cerr << "\nErro: array[" << subscript
         << "] inexistente. " << endl;

    exit(1);  //termina o programa, subscrito fora do intervalo

  } //end if

  return ptr[subscript];  //retorno da refer�ncia

} //end operator[]


// ==============================================
// --- Operador de subscrito sobrecarregado para Arrays const ---
int Array::operator[](int subscript) const
{
  //verifica erro de subscrito fora do intervalo
  if(subscript < 0 || subscript >= sizeA)
  {
    cerr << "\nErro: array[" << subscript
         << "] inexistente. " << endl;

    exit(1);  //termina o programa, subscrito fora do intervalo

  } //end if

  return ptr[subscript];  //retorna c�pia desse elemento

} //end operator[] const


// ==============================================
// --- Operador de entrada sobrecarregado ---
istream &operator>>(istream &input, Array &a)
{
  for(int i=0; i<a.sizeA; i++)
    input >> a.ptr[i];

  return input;

} //end operator>>


// ==============================================
// --- Operador de sa�da sobrecarregado ---
ostream &operator<<(ostream &output, const Array &a)
{
  int i;

  //gera sa�da do array baseado em ptr private
  for(i=0; i<a.sizeA; i++)
  {
    output << setw(12) << a.ptr[i];

    if((i+1) % 5==0)  //5 n�meros por linha de sa�da
      output << endl;

  } //end for

  if(i%5 != 0)        //termina a �ltima linha de sa�da
    output << endl;

  return output;

} //end operator<<






// ==============================================
// --- Fim ---
