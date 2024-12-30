#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    float A[100];
    for (int i = 0; i < 100; i++){
        cin >> A[i];}
    for (int C = 0; C < 100; C++) {
        if (A[C] <= 10)
        {
            cout << "A[" << C << "] = " << A[C] << endl;
        }  
    }
}