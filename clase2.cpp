#include "clase2.h"
#include <iostream>
#include <string>
using namespace std;

CLASE2::CLASE2(){

}

CLASE2::CLASE2(char character){
  this->character = character;

}

char CLASE2::getCharacter(){
  return character;
}

void CLASE2::setDirr(CLASE2* puntero){
  this->puntero = puntero;
}

CLASE2* CLASE2::getDire(){
  return puntero;
}
