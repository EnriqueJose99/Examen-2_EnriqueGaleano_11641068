#include <iostream>
#include <string>
#include "clase2.h"
#include "tda.h"

using namespace std;

int menu();

int main(){
  int opc = 0;
  while (opc != 2) {
    switch (opc = menu()) {
      case 1:{
        string cadena;
        cout<<"Ingrese cadena: "<<endl;
        cin>>cadena;
      }
    }
  }


  return 0;
}

int menu(){
  int flag = 0;
  int numOpc = 0;
  while (flag == 0) {
      cout<<"1.Ingresar cadena"<<endl;
      cout<<"2.Operaciones"<<endl;
      cout<<"Ingrese numero para ingresar a la opcion"<<endl;
      cin>>numOpc;
      return numOpc;
  }
}
