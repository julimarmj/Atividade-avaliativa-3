#include <iostream>
#include "Circuito.h"

using namespace std;
using namespace tCircuito;

struct circuito {
    int v1,r1,r2;
    
    circuito(int valV1, int res1, int res2): v1(valV1), r1(res1), r2(res2){

    }

    friend ostream& operator << (ostream& os, const circuito& dt)
    {
      os << "Fonte: " << dt.v1 << " Volt(s)\n" << "Resistencia 1: " << dt.r1 << " Ohm(s)\n" << "Resistencia 2: " << dt.r2 << " Ohm(s)\n";
    
    return os;
    }
  };

int main() {
  int r=0;
 circuito var(0, 0, 0);
 var.v1=4;
 var.r1=1;
 var.r2=2;
 cout << var;
 paralelo( var.v1, var.r1, var.r2);
}
