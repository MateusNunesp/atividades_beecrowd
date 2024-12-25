#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    if ((A >= B) && (A >= C)) {
    cout << A << " eh o maior" << endl;
    } else if ((B >= A) && (B >= C)) {
    cout << B << " eh o maior" << endl;
    } else if ((C >= A) && (C >= B)) {
    cout << C << " eh o maior" << endl;
    }
}