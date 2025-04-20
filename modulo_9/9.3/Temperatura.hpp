// 9.3 - notas de aula - classe temperatura
//  Lucas Kenzo Kuroki
//

#ifndef  TEMPERATURA
#define  TEMPERATURA

// ==============================================
// Classe
class Temperatura
{
  public:
    Temperatura(int regNum = 0, float intTemp = 0.0, float extTemp = 0.0, char nivel = 'M');

    void setRegNum(int regNum);
    int getRegNum() const;
    void setIntTemp(float intTemp);
    float getIntTemp() const;
    void setExtTemp(float extTemp);
    float getExtTemp() const;
    void setNivel(char nivel);
    char getNivel() const;

    void avgTemp(float intTemp, float extTemp);
    float getAvgTemp() const;

  private:
    int   _regNum;
    float _intTemp,
          _extTemp,
          _avgTemp;
    char  _nivel;

};


#endif
