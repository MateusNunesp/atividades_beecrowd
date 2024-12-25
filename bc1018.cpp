#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A;
    cin >> A;
    cout << A << endl;
    int B = 0, C = 0, D = 0, E = 0, F= 0, G = 0, H = 0;
    if(A >= 100){
        H = A / 100;
        A = A % 100;
        }
    else {H = 0;}
    if(A >= 50){
        G = A / 50;
        A = A % 50;
        }
    else {G = 0;}
    
    if(A >= 20){
        F = A / 20;
        A = A % 20;}
    else {F = 0;}
    if (A >= 10){
        E = A / 10;
        A = A % 10;}
    else {E = 0;}
    if (A >= 5){
        D = A / 5;
        A = A % 5;}
    else {D = 0;}
    if (A >= 2){
        C= A / 2;
        A = A % 2;}
    else {C = 0;}
    if (A >= 1){
        B = 1;}
    else {B = 0;}
    cout << H << " nota(s) de R$ 100,00" << endl;
    cout << G << " nota(s) de R$ 50,00" << endl;
    cout << F << " nota(s) de R$ 20,00" << endl;
    cout << E << " nota(s) de R$ 10,00" << endl;
    cout << D << " nota(s) de R$ 5,00" << endl;
    cout << C << " nota(s) de R$ 2,00" << endl;
    cout << B << " nota(s) de R$ 1,00" << endl;
}