#include <iomanip>
#include <iostream>
using namespace std;
int main () {
    int A, B = 0, C = 0;
    cin >> A;
    if ((A >= 30) && (A < 365))
    {  
        B = A / 30;
        A = A % 30;
      }
    if (A >= 365) {
        C = A / 365;
        A = A % 365;
        B = A / 30;
        A = A % 30;
    }
    cout << C << " ano(s)" << endl;
    cout << B << " mes(es)" << endl;
    cout << A << " dia(s)" << endl;
}
