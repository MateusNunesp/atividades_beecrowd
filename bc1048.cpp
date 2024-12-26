#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    float A;
    cin >> A;
    float B, C, D;
    int E;
    if ((A >= 0) && (A <= 400.00))
    {
        C = 0.15;      
    } else if ((A > 400.00) && (A <= 800.00))
    {
        C = 0.12;
    } else if ((A > 800.00) && (A <= 1200.00))
    {
        C = 0.1;
    } else if ((A > 1200.00) && (A <= 2000.00))
    {
        C = 0.07;
    } else if (A > 2000.00)
    {
        C = 0.04;
    }
    D = A * C;
    B = A + D;
    E = C * 100;
    cout << "Novo salario: " << B << endl;
    cout << "Reajuste ganho: " << D << endl;
    cout << "Em percentual: " << E << " %" << endl;
}