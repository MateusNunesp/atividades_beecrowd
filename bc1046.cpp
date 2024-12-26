#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    if (B > A)
    {
        cout << "O JOGO DUROU " << B - A << " HORA(S)" << endl;
    }
    else if ((B == A))
    {
        cout << "O JOGO DUROU " << "24" << " HORA(S)" << endl;
    } else {
        int C;
        C = (24 - A);
        cout << "O JOGO DUROU " << C + B << " HORA(S)" << endl;
    }
}