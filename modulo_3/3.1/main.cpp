// 3.1
// Lucas kenzo kuroki
//

// ========================================================
// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

// ========================================================
// --- Prototipos de funções ---
void func2();
inline void hello();        //inline nao desvia -> aumenta velocidade -> mas diminui memoria de programa
int cube(int number);
double freqRC(double R, double C);
void atualiza(int &valor); //passa variavel por referencia
int areaRect(int base = 5, int altura = 2); //já passa os valores dos parametros por default

// ========================================================
// --- Variaveis globais ---
int var = 12;

// ========================================================

int main()
{
  int var   = 150;
  int value = 2;
  hello();

  cout << "var Local=  " <<   var << endl;
  cout << "var Global= " << ::var << endl;

  cout << "Resultado do cubo= " << cube(10) << endl;
  cout << fixed << "Frequencia do RC= " << freqRC(1500.0,4.7E-6) << "Hz" << endl;

  func2();
  func2();
  func2();

  cout << "value Antes  = " << value << endl;
  atualiza(value);
  cout << "value Depois = " << value << endl;

  cout << "Area do retangulo= " << areaRect(7,5) << endl;

  return 0;

} //end main


// ========================================================
// --- Desenvolvimento das funçõe ---

void func2()
{
  static int counter = 0;

  counter ++;

  cout << "counter= " << counter << endl;
}

inline void hello()
{

  cout << "Hello!" << endl;


}

int cube(int number)
{
  return number*number*number;

}

double freqRC(double R, double C)
{
  double freq;

  freq = 1/(2*3.141592*R*C);

  return freq;

} //end freqRC


void atualiza(int &valor)
{
  valor += 10;

}


int areaRect(int base, int altura)
{
  return base*altura;

}
