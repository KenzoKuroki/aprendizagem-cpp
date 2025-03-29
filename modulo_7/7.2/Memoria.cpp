// 7.2 - desenvolvimento das funcoes membro da classe memoria separado do hpp
// Created by Lucas Kenzo Kuroki
//
#ifdef MEMORIA_HPP
//--------------------------------------------------
//desenvolvimento das funções
template <typename myType, unsigned short N>
Memoria<myType, N>::Memoria()
{
    for (unsigned short i = 0; i < N; i++){
        memoArray[i] = 0; //inicia a memoria
    }
}//end construtor

template <typename myType, unsigned short N>
void Memoria<myType, N>::gravaDados()
{
    for (unsigned short i = 0; i < N; i++){
        cout <<  "Insira o novo dado " << i+1 << "/" << N << ": "<< endl;
        cin >> memoArray[i];
    }
}//end gravaDados

template <typename myType, unsigned short N>
void Memoria<myType, N>::imprimeDados()
{
    for (unsigned short i = 0; i < N; i++){
        cout << memoArray[i] << " ";
    }
    cout << endl;
}//end imprime dados

#endif
