//
// Anotacoes da aula 8.3

// ========================================================
// bibliotecas
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::showpoint;
using std::noshowpoint;
using std::left;
using std::right;
using std::internal;
using std::showpos;
using std::noshowpos;
using std::hex;
using std::oct;
using std::dec;
using std::showbase;
using std::noshowbase;
using std::scientific;
using std::uppercase;
using std::nouppercase;
using std::boolalpha;
using std::noboolalpha;

#include <iomanip>
using std::setw;
using std::setfill;


// ========================================================
// prototipo das funcoes

void showpointTeste();                      //showpoint & noshowpoint
void alinhamentoTeste();                    //right & left
void internalTeste();                       //internal, showpos, noshowpos
void fillTeste();                           //setfill
void showbaseTeste();                       //showbase & noshowbase
void scientificTeste();                     //scientific
void uppercaseTeste();                      //uppercase & nouppercase
void boolalphaTeste();                      //boolalpha & noboolalpha


// ========================================================
// main
int main()
{

  //showpointTeste();
  //alinhamentoTeste();
  //internalTeste();
  //fillTeste();
  //showbaseTeste();
  //scientificTeste();
  //uppercaseTeste();
  boolalphaTeste();

  cout << "\n\nFim." << endl;
  while(1);
  return 0;

} //end main


// ========================================================
// Desenvolvimento de funcoes

void showpointTeste()
{
  double valor = 17.7;

  cout << "1- valor= " << valor << endl;
  cout << showpoint << "2- valor= " << valor << endl;
  cout << "3- valor= " << valor << endl;
  cout << noshowpoint << "4- valor= " << valor << endl;


} //end showpointTeste


void alinhamentoTeste()
{
  int valor = 4093;

  cout << setw(8) << valor << endl;
  cout << left  << setw(8) << valor << endl;
  cout << right << setw(8) << valor << endl;

} //end alinhamentoTeste


void internalTeste()
{

  cout << internal << showpos << setw(4) << 42 << endl;

  cout << setw(8) << 25 << endl;

  cout << setw(8) << -23 << endl;

  cout << noshowpos << 16 << endl;

} //end internalTeste()


void fillTeste()
{
  cout << setfill('$') << setw(12) << 4321 << endl;

  cout.fill('*');
  cout << setw(18) << 9876 << endl;

} //end fillTeste


void showbaseTeste()
{
  cout << showbase;

  cout << hex;
  cout << 20 << endl;

  cout << oct;
  cout << 15 << endl;

  cout << dec;
  cout << 55 << endl;

  cout << noshowbase;

  cout << hex;
  cout << 20 << endl;

  cout << oct;
  cout << 15 << endl;

  cout << dec;
  cout << 55 << endl;

} //end showbaseTeste


void scientificTeste()
{
  cout << scientific << 0.001 << endl;
  cout << 0.0001 << endl;
  cout << 8.5 << endl;
  cout << .0000000042 << endl;
  cout << 4.2E-008 << endl;

  cout << fixed << 0.001 << endl;
  cout << 0.0001 << endl;
  cout << 8.5 << endl;
  cout << .0000000042 << endl;
  cout << 4.2E-008 << endl;

} //end scientificTeste


void uppercaseTeste()
{
  cout << uppercase;
  cout << showbase << scientific;

  cout << 0.000001 << endl;
  cout << hex << 26 << endl;

  cout << nouppercase;
  cout << showbase << scientific;

  cout << 0.000001 << endl;
  cout << hex << 26 << endl;

} //end uppercaseTeste


void boolalphaTeste()
{
  cout << boolalpha;
  cout << (2==9) << endl;
  cout << (2!=4) << endl;
  cout << (5<12) << endl;
  cout << (7>=9) << endl;

  cout << noboolalpha;
  cout << (2==9) << endl;
  cout << (2!=4) << endl;
  cout << (5<12) << endl;
  cout << (7>=9) << endl;

} //end boolalphaTeste

