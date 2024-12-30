#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int X;
    int A;
    cin >> X;
    long long F[60];
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 60; i++){      
        F[i] = F[i - 1] + F[i - 2];}
    for(int O = 0; O < X; O++){
    cin >> A;
    cout << "Fib(" << A << ") = " << F[A] << endl;
    }
}