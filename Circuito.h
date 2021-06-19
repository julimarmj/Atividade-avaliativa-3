using namespace std;
namespace tCircuito{

  struct circuito {
    int v1,r1,r2;
    circuito(): v1(5), r1(1), r2(1){
    }

      friend ostream& operator << (ostream& os, const circuito& dt)
    {
    os << "Fonte: " << dt.v1 << " Volt(s)\n" << "Resistencia 1: " << dt.r1 << " Ohm(s)\n" << "Resistencia 2: " << dt.r2 << " Ohm(s)\n";
    return os;
    }
  };
}
