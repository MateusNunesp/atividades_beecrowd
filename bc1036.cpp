#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    cout << fixed << setprecision(5);
    double A, B, C;
    cin >> A >> B >> C;
    double D = (B * B) - (4 * A * C);
    if ((D >= 0) && (A != 0))
    {
        double F = (-B + sqrt(D)) / (2 * A);
        double G = (-B - sqrt(D)) / (2 * A);
        cout << "R1 = " << F << endl;
        cout << "R2 = " << G << endl;
    } else {cout << "Impossivel calcular" << endl;}
}