#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int A = 0; A <= n; A++){
        string B;
        cin >> B;
        for (int C = 0; C <= B.length(); C++){
            if (!((B[C] >= 48) && (B[C] <= 57)))
            {
                int X = B[C];
                X = X + 3;
                B[C] = (char) X;
            }            }    
        for (int C = 0; C <= B.length() / 2; C++){
            

        }
         
         }
} 
