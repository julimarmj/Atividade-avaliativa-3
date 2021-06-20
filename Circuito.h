using namespace std;
namespace propCircuito{

  struct tCircuito {
    int v1,r1,r2;
    
    tCircuito(int valV1, int res1, int res2): v1(valV1), r1(res1), r2(res2){

    }

    friend ostream& operator << (ostream& os, const tCircuito& dt)
    {
      os << "Fonte: " << dt.v1 << " Volt(s)\n" << "Resistencia 1: " << dt.r1 << " Ohm(s)\n" << "Resistencia 2: " << dt.r2 << " Ohm(s)\n";
    
    return os;
    }
  };

  void paralelo(float v1, float r1, float r2){
    float resT, corrente, potencia;
    resT = r1*r2/(r1+r2);
    corrente = v1/resT;
    potencia = v1 * corrente;
    cout << "\nA resistencia em paralelo é: " << resT << " ohm(s)\n";
    cout << "A corrente total é: " << corrente <<" A\n";
    cout << "A potencia da fonte é: " << potencia << " W\n";
  }

  void serie(float v1, float r1, float r2){
    float resT, corrente, potencia;
    resT = r1+r2;
    corrente = v1/resT;
    potencia = v1 * corrente;
    cout << "\nA resistência em serie é: " << resT << " ohm(s)\n";
    cout << "A corrente total é: " << corrente <<" A\n";
    cout << "A potência da fonte é: " << potencia << " W\n";
  }
}
