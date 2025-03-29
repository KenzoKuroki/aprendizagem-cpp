// 7.2 - Desenvolvimento das funções da classe utilizando templates
// Created by Lucas Kenzo Kuroki
//

#ifdef DESLOCAARRAY_HPP

template<typename LK, unsigned short TAM>
DeslocaArray<LK, TAM>::DeslocaArray()
{
  cout << "Iniciando classe para deslocar array." << endl;
}//end Desloca array

template<typename LK, unsigned short TAM>
void DeslocaArray<LK, TAM>::shiftArray(LK array[TAM])
{
  unsigned short limite = TAM - 1;
  _array[limite] = array[0];

  for(unsigned short i = 0; i < limite; i++)
  {
    _array[i] = array[i + 1];
  }//end for
}//end shiftArray

template<typename LK, unsigned short TAM>
void DeslocaArray<LK, TAM>::printArray()
{
  cout << "\n=========================="
       << "\nSaida deslocada: " << endl;
  for(unsigned short i = 0; i < TAM; i++)
  {
    cout << _array[i] << " ";
  }//end for
  cout << "\n==========================";
}//end printArray

#endif