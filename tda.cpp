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


void TDA::apilar(CLASE2 *puntero){
  this->puntero = puntero;
}
