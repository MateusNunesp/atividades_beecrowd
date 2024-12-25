#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(3);
    double pi = 3.14159;
    int R;
    cin >> R;
    cout << "VOLUME = " << pi * R * R * R * 4 / 3.0 << endl;
}