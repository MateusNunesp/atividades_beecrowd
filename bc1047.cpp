#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int H, M;
    if (C > A)
    {
        if (D > B)
        {
            H = C - A;
            M = D - B;
        }else if (D == B)
        {
            H = C - A;
            M = 0;
        }else {
            M = (60 + D) - B;
            H = C - A - 1;
        }       
    } else if (C == A)
    {
        if (D == B)
        {
            H = 24;
            M = 0;
        }else if (D > B)
        {
            H = 0;
            M = D - B;
        }else {
            H = 23;
            M = (60 + D) - B;
        }    
    } else if (C < A)
    {
        if (D == B)
        {
            H = (24 - A) + C;
            M = 0;
        }else if (D > B)
        {
            H = (24 - A) + C;
            M = D - B;
        }else {
            H = (24 - A) + C -1;
            M = (60 + D) - B;
        }   
}
    cout << "O JOGO DUROU " << H << " HORA(S) E " << M << " MINUTO(S)" << endl;
}