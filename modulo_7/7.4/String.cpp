//
// Created by Lucas Kenzo Kuroki
//

#include "String.hpp"

//construtor:
String::String(const char *str):
 length((str!=0)?strlen(str):0)
{
  setString(str);
}//end construtor

//--------------------------------------
//funcao que define a string no ponteiro
void String::setString(const char *str)
{
  sPtr = new char[length+1];
  if(str!=0)
    strcpy(sPtr, str);
  else
    sPtr[0] = '\0';
}//end setString

//--------------------------------------
//destrutor usado para liberar a memoria
String::~String()
{
  delete[] sPtr; //libera a memoria
}//end destrutor

//--------------------------------------
//operador de atribuicao
const String &String::operator= (const String &right)
{

  if(&right!=this)
    {
       delete[] sPtr;
       length = right.length;
       setString(right.sPtr);
    }//end if
    else
      cout << "ocorreu uma tentativa de autoatribuicao!" << endl;

    return *this;
}//end operator

//--------------------------------------
//operador da concatenacao
const String &String::operator+=(const String &right)
{
  size_t len = length + right.length;
  char *temp = new char[len+1];
  strcpy(temp, sPtr);
  strcpy(temp +  length, right.sPtr);

  delete[] sPtr;
  sPtr = temp;
  length = len;

  return *this;
}//end concatenacao

//--------------------------------------
//operador igual
bool String::operator==(const String &right) const{
  return strcmp(sPtr, right.sPtr) == 0;
}//end comparacao

//--------------------------------------
//operador da menor
bool String::operator<(const String &right) const{
  return strcmp(sPtr, right.sPtr) < 0;
}//end menor que

//--------------------------------------
//operador da diferenca
bool String::operator!=(const String &right) const{
  return !(*this==right);
}//end da diferenca

//--------------------------------------
//operador de maior
bool String::operator>(const String &right) const{
  return right < *this;
}//end maior

//--------------------------------------
//operador de menor e igual
bool String::operator<=(const String &right) const{
  return !(right < *this);
}//end menor igual

//--------------------------------------
//operador de maior igual
bool String::operator>=(const String &right) const{
  return !(*this < right);
}//end maior igual

//--------------------------------------
//pega o tamanho
int String::getLenth() const{
  return length;
}//end getLength

//--------------------------------------
//operador
ostream& operator<<(ostream& output, const String&str){
  output << str.sPtr;
  return output;
}//end operador de saida

//--------------------------------------
//operador de entrada
istream& operator>>(istream& input, String& str){
  char temp[100];
  input >> setw(100) >> temp;
  input >> temp;
  return input;
}

//const String &String::operator[](const int &index)
//{
//	_index = index;
//    return *this;
//}
