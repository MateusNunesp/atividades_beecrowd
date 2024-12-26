#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    float A, B, C;
    cin >> A >> B >> C;
    if ((A + B > C) && (A + C > B) && (B + C > A))
    {
        cout << "Perimetro = " << A + B + C << endl;
    } else {
        cout << "Area = " << (A + B) * C / 2 << endl;
    }   
}