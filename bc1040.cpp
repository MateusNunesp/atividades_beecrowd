#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(1);
    float A, B, C, D;
    cin >> A >> B >> C >> D;
    float M;
    M = (A * 2 + B * 3 + C * 4 + D) / 10;
    cout << "Media: " << M << endl;
    if (M >= 7)
    {
        cout << "Aluno aprovado." << endl;
    } else if ((M < 7) && (M >= 5))
    {
        cout << "Aluno em exame." << endl;
        float E;
        cin >> E;
        cout << "Nota do exame: " << E << endl;
        float N;
        N = (E + M) / 2;
        if (N >= 5)
        {
            cout << "Aluno aprovado." << endl;
        } else if (N < 5)
        {
            cout << "Aluno reprovado." << endl;
        }
        
        cout << "Media final: " << N << endl;
    } else if (M < 5) {
        cout << "Aluno reprovado." << endl;
    }  
}