#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(3);
    float A;
    float B;
    float C;
    double pi = 3.14159;
    cin >> A >> B >> C;
    cout << "TRIANGULO: " << A * C / 2 << endl;
    cout << "CIRCULO: " << C * C * pi << endl;
    cout << "TRAPEZIO: " << (A + B) * C / 2 << endl;
    cout << "QUADRADO: " << B * B << endl;
    cout << "RETANGULO: " << A * B << endl;
}