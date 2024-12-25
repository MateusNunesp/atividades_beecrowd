#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    cout << fixed << setprecision(4);
    double X1;
    double X2;
    double Y1;
    double Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    double num = ((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1));
    cout << sqrt(num) << endl;
}
