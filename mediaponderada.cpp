#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(5); 
    double A = 3.5;
    double B = 7.5;
    double C;
    double D;
    cin >> C >> D;
    double E = A * C;
    double F = B * D;
    double G = E + F;
    double H = G / 11;
    cout << "MEDIA = " << H << endl;
}