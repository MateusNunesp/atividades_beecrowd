#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int C, D;
    C = B % A;
    D = A % B;
    if ((C == 0) || (D == 0))
    {
        cout << "Sao Multiplos" << endl;
    } else {cout << "Nao sao Multiplos" << endl;}   
}