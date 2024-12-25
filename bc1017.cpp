#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(3);
    double A, B;
    cin >> A >> B;
    cout << A * B / 12.0 << endl;
}