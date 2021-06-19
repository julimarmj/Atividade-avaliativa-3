using namespace std;
namespace tCircuito{

  void paralelo(float v1, float r1, float r2){
    float resT, corrente, potencia;
    cout << v1 << r1 << r2 << endl;
    resT = r1*r2/(r1+r2);
    cout << resT << endl;
    corrente = v1/resT;
    potencia = v1 * corrente;
    cout << "A resistencia em paralelo é: " << resT << " ohm(s)\n";
    cout << "A corrente total é: " << corrente <<" A\n";
    cout << "A potencia é: " << potencia << " W\n";
  }

  void serie(float v1, float r1, float r2){
    float resT, corrente, potencia;
    cout << v1 << r1 << r2 << endl;
    resT = r1+r2;
    cout << resT << endl;
    corrente = v1/resT;
    potencia = v1 * corrente;
    cout << "A resistencia em serie é: " << resT << " ohm(s)\n";
    cout << "A corrente total é: " << corrente <<" A\n";
    cout << "A potencia é: " << potencia << " W\n";
  }
}
