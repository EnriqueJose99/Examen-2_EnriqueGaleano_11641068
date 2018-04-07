#ifndef CLASE2_H
#define  CLASE2_H

#include <string>
#include <iostream>
using namespace std;

class CLASE2{
public:
  CLASE2 *puntero;
  CLASE2* dire;
  char character;
  CLASE2();
  CLASE2(char);
  char getCharacter();
  void setDirr(CLASE2*);
  CLASE2* getDire();
};
#endif
