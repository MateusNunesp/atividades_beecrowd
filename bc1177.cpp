#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int N[1000];
    N[0] = 0;
    int X;
    cin >> X;
    for (int i = 0; i < (1000 / X) + 1; i++){
        for(int j = 0; j < X; j++){
        N[j] = j;
        int a = 0;
        if (i == 0) {
            a = a + j;
        } else if (j != 0)
        {
            a = X * i + N[j];
        } else{a = X * i;}
        if (a < 1000)
        {
            cout << "N[" << a << "] = " << N[j] << endl;
        }
        }
    }
}


