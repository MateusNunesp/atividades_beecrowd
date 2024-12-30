#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int N[20];
    int C;
    for (int i = 0; i < 20; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < 20; i++)
    {
        C = ((10 - i) * 2) - 1 + i;
        cout << "N[" << i << "] = " << N[C] << endl;
    }
}