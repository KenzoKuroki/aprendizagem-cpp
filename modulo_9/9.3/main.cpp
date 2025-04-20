// 9.3 - main para testar a classe temperatura
// Lucas Kenzo Kuroki

// ==============================================
// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::cin;
using std::ios;

#include <fstream>
using std::fstream;
using std::ofstream;

#include <cstdlib>
using std::exit;

#include "Temperatura.hpp"


void geraRegistros(ofstream &arquivo, uint16_t totalAddr);


// ==============================================
//funcao principal
int main()
{
  int      numReg,
           endereco;
  uint16_t totalAddr;
  float    intTemp,
           extTemp;
  char     nivel,
           opt = 0;

  cout << "Escolha a opcao:\n"
       << "1- Criar arquivo novo\n"
       << "2- Inserir novos registros\n... ";
  cin  >> opt;

  if(opt == '1')
  {
    cout << "Insira o numero total de enderecos\n... ";
    cin  >> totalAddr;
    ofstream RegTemp("registros.dat",ios::binary);
    geraRegistros(RegTemp,totalAddr);
    cout << "Arquivo registros.dat criado com "
         << totalAddr << " enderecos." << endl;
    cout << "\n\nFim." << endl;
    RegTemp.close();
    while(1);

  } //end if

  fstream RegTemp("registros.dat",ios::in|ios::out|ios::binary);

  if(!RegTemp)
  {
    cerr << "Erro ao editar o arquivo registros.dat!" << endl;
    exit(1);

  }

  Temperatura s1;

  do
  {
    cout << "Digite o endereco para armazenar o registro\n... ";
    cin  >> endereco;
    cout << "Insira registro, temperatura interna, externa e nivel\n... ";
    cin  >> numReg >> intTemp >> extTemp >> nivel;

    s1.setRegNum(numReg);
    s1.setIntTemp(intTemp);
    s1.setExtTemp(extTemp);
    s1.setNivel(nivel);
    s1.avgTemp(intTemp,extTemp);

    RegTemp.seekp((s1.getRegNum()-1)*sizeof(Temperatura));

    RegTemp.write(reinterpret_cast<const char*>(&s1),sizeof(Temperatura));

    cout << "Armazenar novo dado? (s-sim | n-nao)\n... ";
    cin  >> opt;

  } while(opt!='n');


  RegTemp.close();
  cout << "Registros armazenados com sucesso!\n\nFIM." << endl;
  return 0;
} //end main


void geraRegistros(ofstream &arquivo, uint16_t totalAddr)
{
  if(!arquivo)
  {
    cerr << "Falha ao criar registros.dat!" << endl;
    exit(1);

  } //end if

  Temperatura sensor1;

  for(uint16_t i=0; i<totalAddr; i++)
    arquivo.write(reinterpret_cast<const char*>(&sensor1), sizeof(Temperatura));

} //end geraRegistros













