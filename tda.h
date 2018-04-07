#ifndef TDA_H
#define TDA_H
#include <string>
#include <iostream>
#include "clase2.h"

using namespace std;

class TDA{
public:
  CLASE2 *puntero;
  TDA();
  TDA(CLASE2*);
  void apilar(char);
  CLASE2* desapilar();
  CLASE2* tope();
  bool estaVacia();

};
#endif
