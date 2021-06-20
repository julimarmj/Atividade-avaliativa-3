#include <iostream>
#include "Circuito.h"

using namespace std;
using namespace propCircuito;

int main() {
  int i=0, tipo=0;

  tCircuito var(0, 0, 0);
  
  cout << "Informe o valor da fonte: \n";
  cin >> var.v1;
  cout << "Informe o valor da primeira resistência: \n";
  cin >> var.r1;
  cout << "Informe o valor da segunda resistência: \n";
  cin >> var.r2;

  do {
    cout << "Para qual circuito deseja obter as informações: \n1 - Paralelo \n2 - Série \n";
    cin >> tipo;

   if (tipo==1){
      cout <<"------------------------------------------------\n";
      cout << var;
      paralelo( var.v1, var.r1, var.r2);
      i=0;
      }else if(tipo == 2){
      cout <<"------------------------------------------------\n";
      cout << var;
      serie( var.v1, var.r1, var.r2);
      i=0;
      }else {
      cout << "Opção nao listada!\n";
      i=1;
      }
  }    
  while(i);
}
