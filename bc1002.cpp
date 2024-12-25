#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(4);
    double pi = 3.14159;
    double R;
    cin >> R;
    cout << "A=" << pi * R * R << endl;
}