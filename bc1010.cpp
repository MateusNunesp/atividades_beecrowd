#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    int A;
    int B;
    double C;
    cin >> A >> B >> C;
    int D;
    int E;
    double F;
    cin >> D >> E >> F;
    cout << "VALOR A PAGAR: R$ " << B * C + E * F << endl;
}