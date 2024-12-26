#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    float A, B;
    cin >> A >> B;
    if ((A > 0) && (B > 0))
    {
        cout << "Q1" << endl;
    } else if ((A < 0) && (B > 0))
    {
        cout << "Q2" << endl;
    } else if ((A < 0) && (B < 0))
    {
        cout << "Q3" << endl;
    } else if ((A > 0) && (B < 0))
    {
        cout << "Q4" << endl;
    } else if ((B == 0) && (A != 0))
    {
        cout << "Eixo X" << endl;
    } else if ((A == 0) && (B != 0))
    {
        cout << "Eixo Y" << endl;
    } else if ((A == 0) && (B == 0))
    {
        cout << "Origem" << endl;
    }
}
