#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int A, B, C = 0;
    cin >> A;
    if (A >= 60) {
        B = A / 60;
        A = A % 60;
    } else {B = 0;}

    while (B >= 60)
    {
        C = B / 60;
        B = B % 60;
    }
    cout << C << ":" << B << ":" << A << endl;
}
