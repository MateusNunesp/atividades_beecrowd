#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    int f;
    int h;
    double s;
    cin >> f >> h >> s;
    double G = s*h;
    cout << "NUMBER = " << f << endl;
    cout << "SALARY = " << "U$ " << G << endl;
}