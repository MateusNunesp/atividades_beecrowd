#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A;
    int B;
    int C;
    int D;
    cin >> A >> B >> C >> D;
    int E = A * B;
    int F = C * D;
    int G = E - F;
    cout << "DIFERENCA = " << G << endl;
}