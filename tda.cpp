#include <iostream>
#include <string>
#include "tda.h"
#include "clase2.h"
using namespace std;


TDA::TDA(){

}

TDA::TDA(CLASE2 *puntero){
  this->puntero = puntero;
}


void TDA::apilar(char gg){
  CLASE2* classes = new CLASE2(gg);
  if (puntero == NULL) {
    puntero = classes;
  }else{
    classes->setDirr(puntero);
    puntero = classes;
  }
}


CLASE2* TDA::tope(){
  return puntero;
}

CLASE2* TDA::desapilar(){
  if (puntero==NULL) {
    CLASE2* temporal = puntero;
    puntero = puntero->getDire();
    return temporal;
  }else{
    return puntero;
  }
}
