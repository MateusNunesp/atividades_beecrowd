    #include <iostream>
    #include <iomanip>
    using namespace std;
    int main() {
        cout << fixed << setprecision(3);
        double A;
        double B;
        cin >> A >> B;
        cout << A / B << " km/l" << endl;
    }