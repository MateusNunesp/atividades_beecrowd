#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    float A;
    float B;
    string nome;
    cin >> nome >> A >> B;
    cout << "TOTAL = R$ " << A + 0.15 * B << endl;
}