#include <iostream>
#include <string>
#include <fstream>
#include "clase2.h"
#include "tda.h"

using namespace std;

int menu();

int main(){
  TDA* pila = new TDA();
  CLASE2* clas;
  CLASE2* des;
  char sub;
  int opc = 0;
  while (opc != 2) {
    switch (opc = menu()) {
      case 1:{
        string cadena;
        cout<<"Ingrese la operacion (Ej. 4*7+7(1/7)): "<<endl;
        cin>>cadena;
        for (int i = 0; i < cadena.length(); i++) {
          pila->apilar(cadena[i]);
          clas  = pila->tope();
          cout<<" "<<clas->getCharacter()<<endl;
        }
        //si esta vacia o no la pila
        if (clas == NULL) {
          cout<<"Esta vacia"<<endl;
        }else{
          cout<<"Esta llena la pila"<<endl;
        }
        des = pila->desapilar();
        cout<<"El tope es: "<<des->getCharacter()<<endl;
        int cont = 0;
        char num1 = ' ';
        char num2 = ' ';
        int num1Entero = 0;
        int num2Entero = 0;
        int resultado = 0;
        char operador = ' ';
        int numeros = 0;
        while(pila->tope()!= NULL){
          if (des->getCharacter()=='1'||des->getCharacter()=='2'||des->getCharacter()=='3'||des->getCharacter()=='4'||des->getCharacter()=='5'
            ||des->getCharacter()=='6'||des->getCharacter()=='7'||des->getCharacter()=='8'||des->getCharacter()=='9') {
            if (cont == 0) {
              num1 = des->getCharacter();
              cont++;
              numeros++;
            }else{
              num2 = des->getCharacter();
              cont=0;
              numeros++;
            }
          }
          if (des->getCharacter()=='+'||des->getCharacter()=='-'||des->getCharacter()=='*'||des->getCharacter()=='/') {
            operador  = des->getCharacter();
            numeros++;
          }
          if (numeros == 2) {
            if (resultado == 0) {
              num1Entero = (int)num1-'0';
              num2Entero = (int)num2-'0';
              resultado = num1Entero + num2Entero;
            }
          }
        }
        cout<<resultado<<endl;
        ofstream fileRead;
        fileRead.open("pila.txt");
        fileRead<<cadena<<endl;

      }
    }
  }
  return 0;
}

int menu(){
  int flag = 0;
  int numOpc = 0;
  while (flag == 0) {
    cout<<endl;
      cout<<"1.Ingresar cadena y operaciones"<<endl;
      cout<<"2.Salir"<<endl;
      cout<<"Ingrese numero para ingresar a la opcion"<<endl;
      cin>>numOpc;
      return numOpc;
  }
}
