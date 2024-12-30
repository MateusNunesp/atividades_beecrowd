#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int N[10];
    int A;
    cin >> A;
    N[0] = A;
    for (int C = 0; C < 10; C++){
        if(C == 0){
            N[C] = A;
        } else {N[C] = N[C-1] * 2;}
        cout << "N[" << C << "] = " << N[C] << endl;
    }
}