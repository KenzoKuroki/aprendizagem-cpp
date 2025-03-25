// 5.5 - implementando função principal para alocação de memoria com new
//  Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;

#include "Components.hpp"

int main()
{
  cout << "Antes dos objetos serem criados compCnt = "
       << Components::getCompCnt() << endl;

  //Aloca dinamicamente 3 novos Components utilizando new
  Components *comp1Ptr = new Components("TBJ","TIP42");
  Components *comp2Ptr = new Components("MOSFET","IRF3205");
  Components *comp3Ptr = new Components("Integrated Circuit", "SG3525A");

  cout << "Depois dos 3 objetos serem criados compCnt = "
       << comp1Ptr->getCompCnt() << endl;
  cout << "\nComponentes 1: "
       << comp1Ptr->getTypeComp() << ' ' << comp1Ptr->getModelComp();
  cout << "\nComponentes 2: "
       << comp2Ptr->getTypeComp() << ' ' << comp2Ptr->getModelComp();
  cout << "\nComponentes 3: "
       << comp3Ptr->getTypeComp() << ' ' << comp3Ptr->getModelComp() << "\n\n";


  delete comp1Ptr;
  comp1Ptr = 0;
  delete comp2Ptr;
  comp2Ptr = 0;
  delete comp3Ptr;
  comp3Ptr = 0;

  cout << "Depois dos objetos serem destruidos compCnt = "
       << Components::getCompCnt() << endl;

  cout << "\nFIM" << endl;

  return 0;
} //end main
