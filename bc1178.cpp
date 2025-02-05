#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(4);
    double N[100];
    double A;
    cin >> A;
    N[0] = A;
    cout << "N[0] = " << N[0] << endl;
    for(int i = 1; i < 100; i++){
        N[i] = N[i - 1] / 2;
        cout << "N[" << i << "] = " << N[i] << endl;
    }
}