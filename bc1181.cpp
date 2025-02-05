#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    int X;
    cin >> X;
    string T;
    cin >> T;
    double M[12][12];
    for(int i = 0; i < 12; i++){
        for(int A = 0; A < 12; A++){
        cin >> M[i][A];}
    }
        double S = 0.0;
    for (int B = 0; B < 12; B++)
        {
          S += M[X][B];
        }
    if (T == "S")
    {
        cout << S << endl;
    } 
    else if (T == "M")
    {
        cout << (S / 12) << endl;
}
}