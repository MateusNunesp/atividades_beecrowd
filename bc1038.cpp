#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    float A, B;
    float V;
    cin >> A >> B;
    if (A == 1)
    {
        V = 4.00 * B;
    } 
    else if (A == 2)
    {
        V = 4.50 * B;
    } 
    else if (A == 3)
    {
        V = 5.00 * B;
    } 
    else if (A == 4)
    {
        V = 2.00 * B;
    } 
    else if (A == 5)
    {
        V = 1.50 * B;
    }
    cout << "Total: R$ " << V << endl;
}