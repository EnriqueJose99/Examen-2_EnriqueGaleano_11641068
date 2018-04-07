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

        cout<<"El tope es: "<<des->getCharacter()<<endl;
        int cont = 0;
        char num1 = ' ';
        char num2 = ' ';
        int num1Entero = 0;
        int num2Entero = 0;
        int resultado = 0;
        char operador = ' ';
        int numeros = 0;
        int result = 0;
        bool bandera = true;
        int o = 0;
        des = pila->desapilar();
        cout<<"El tope es: "<<des<<endl;
        while(pila->tope()!= NULL){
          //cout<<"Entro"<<endl;
          des = pila->desapilar();
          if (des->getCharacter()=='1'||des->getCharacter()=='2'||des->getCharacter()=='3'||des->getCharacter()=='4'||des->getCharacter()=='5'
            ||des->getCharacter()=='6'||des->getCharacter()=='7'||des->getCharacter()=='8'||des->getCharacter()=='9') {
            if (bandera) {
              result = des->getCharacter()-48;
              bandera = false;
              numeros++;
            }else{
              o = des->getCharacter()-48;
              if (operador == '+') {
                result = o + result;
              }
              if (operador == '-') {
                /* code */
                result = o- result;
              }
              if (operador == '*') {
                /* code */
                result = o * result;
              }
              if (operador == '/') {
                /* code */
                result = o / result;
              }
            }
          }else {
            operador = des->getCharacter();
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
