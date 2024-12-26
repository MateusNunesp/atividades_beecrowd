#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string A;
    cin >> A;
    int E;
        for(int C = 0; C <= A.length() / 2; C++){
            if(A.length() % 2 != 0) 
                {int I = (A.length() / 2) - C;
                int Y = 2 * I + C;
                if (A[C] == A[Y])
                {
                E = 1;
                }  else {E = 0; break;}
                } else{
                    int I = (A.length() / 2) - C;
                int Y = (2 * I) + C - 1;
                if (A[C] == A[Y])
                {
                E = 1;
                }  else {E = 0; break;}
                }

            }
    if (E == 1)
    {
        cout << "true";
    } else {cout << "false";} 
} 
    /*
    abacaxi
    0123456
  1 parte:      2 parte:                3 parte:            4 parte        
  C = 0             C = 1               C = 2                   c = 3
  I = 3             I = 2               I = 1                   i = 0
  y = 6             Y = 5               Y = 4                   y = 3
  if a == i         if b == x             if a == a             if c == c
    e = 0            e = 0                  e = 1                   e = 1
    */    

  
  
  