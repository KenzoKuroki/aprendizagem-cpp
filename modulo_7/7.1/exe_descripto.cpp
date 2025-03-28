// 7.1 - exercicio - codigo que descriptografa varios tipos de dados
// Created by Lucas Kenzo Kuroki
//

//===========================================================================
//Bibliotecas:
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//===========================================================================

//===========================================================================
//Prototipos de funções:
template <typename newType>
void criptografaArray(newType *myArray, int arraySize);

void imprimeMenu(char &dataType);
void setArray(char &dataType, int arraySize);
template <typename newType>
void getArray(newType *array, int arraySize);
//===========================================================================

//===========================================================================
//função principal:
int main(){
    char dataType;
    const int arraySize = 5;

    imprimeMenu(dataType);
    setArray(dataType, arraySize);
    return 0;

}//end main

//===========================================================================
//Desenvolvimento de funções:
template <typename newType>
void criptografaArray(newType *myArray, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if(i%2)
            myArray[i] += 5;
        else
            myArray[i] += 3;
    } //end for
    for(int i =0; i < arraySize; i++)
        cout << myArray[i] << " ";
    cout << endl;
}//end criptografiaArray

//===========================================================================
// função para imprimir menu
void imprimeMenu(char &dataType){
    cout << "Digite o tipo do array: \n"
           << "(i) - inteiro\n"
           << "(d) - double\n"
           << "(c) - char\n"
           << endl;
    cin >> dataType;
}//end imprime menu

//===========================================================================
// função para selecionar o tipo correto e chamar a funçao que gera o array
void setArray(char &dataType, int arraySize) {
    if (dataType == 'c') {
        char array[arraySize];
        getArray(array, arraySize);
    }
    else if (dataType == 'i') {
        int array[arraySize];
        getArray(array, arraySize);
    }
    else if (dataType == 'd') {
        double array[arraySize];
        getArray(array, arraySize);
    }
    else {
        cout << "Error!" << endl;
        exit(1);
    }

}//end set array

//===========================================================================
//função para gerar o array com tipo correto e imprime o descriptografado
template <typename newType>
void getArray(newType *array, int arraySize){

    cout << "Digite o array: \n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << "array[i]: ";
        cin >> array[i];

        if(i%2)
            array[i] -= 5;
        else
            array[i] -= 3;
    } //end for

    cout << "Saida: "<< endl;
    for(int i =0; i < arraySize; i++)
        cout << array[i] << " ";
    cout << endl;
}//end get Array
//===========================================================================