#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double A;
    int B, C, D, E, F, G, H, I, J, K, L, M;
    cin >> A;
    int P = A * 100;
    if (P >= 10000)
    {
        B = P / 10000;
        P = P % 10000;
    } else {B = 0;}
    if (P >= 5000)
    {
        C = P / 5000;
        P = P % 5000;
    } else {C = 0;}
    if (P >= 2000)
    {
        D = P / 2000;
        P = P % 2000;
    } else {D = 0;}
    if (P >= 1000)
    {
        E = P / 1000;
        P = P % 1000;
    } else {E = 0;}
    if (P >= 500)
    {
        F = P / 500;
        P = P % 500;
    } else {F = 0;}
    if (P >= 200)
    {
        G = P / 200;
        P = P % 200;
    } else {G = 0;}
    if (P >= 100)
    {
        H = P / 100;
        P = P % 100;
    } else {H = 0;}
    if (P >= 50)
    {
        I = P / 50;
        P = P % 50;
    } else {I = 0;}
    if (P >= 25)
    {
        J = P / 25;
        P = P % 25;
    } else {J = 0;}
    if (P >= 10)
    {
        K = P / 10;
        P = P % 10;
    } else {K = 0;}
    if (P >= 5)
    {
        L = P / 5;
        P = P % 5;
    } else {L = 0;}
    if (P >= 1){
        M = P / 1;
        P = P % 1;
    } else {M = 0;}
    cout << "NOTAS:" << endl;
    cout << B << " nota(s) de R$ 100.00" << endl;
    cout << C << " nota(s) de R$ 50.00" << endl;
    cout << D << " nota(s) de R$ 20.00" << endl;
    cout << E << " nota(s) de R$ 10.00" << endl;
    cout << F << " nota(s) de R$ 5.00" << endl;
    cout << G << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << H << " moeda(s) de R$ 1.00" << endl;
    cout << I << " moeda(s) de R$ 0.50" << endl;
    cout << J << " moeda(s) de R$ 0.25" << endl;
    cout << K << " moeda(s) de R$ 0.10" << endl;
    cout << L << " moeda(s) de R$ 0.05" << endl;
    cout << M << " moeda(s) de R$ 0.01" << endl;
}