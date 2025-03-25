//
// 5.5 - classe Components para contagem de componentes
// created by Lucas Kenzo Kuroki
//

#ifndef  COMPONENTS
#define  COMPONENTS

class Components
{
  public:
    Components(const char * const typeComp, const char * const modelComp);   //construtor
    ~Components();                                                           //destrutor
    const char *getTypeComp();                                               //retorna o tipo de componente
    const char *getModelComp();                                              //retorna o modelo do componente

    static int getCompCnt();                                                 //função-membro static, retorna o num de objetos instanciados

  private:
    char *_typeComp;
    char *_modelComp;

    static int compCnt;   //numero de componentes que serão criados na classe (objetos)

}; //end class Components


#endif // COMPONENTS
