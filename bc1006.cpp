#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    float A = 2.0;
    float B = 3.0;
    float C = 5.0;
    float D;
    float E;
    float F;
    cin >> D >> E >> F;
    float G = D * A;
    float H = E * B;
    float I = F * C;
    float J = G + H + I;
    float K = J / 10;
    cout << "MEDIA = " << K << endl;
}