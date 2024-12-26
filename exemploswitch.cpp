#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Menu de escolhas" << endl;
    cout << "1: Opcao 1" << endl;
    cout << "2: Opcao 2" << endl;
    cout << "3: Opcao 3" << endl;
    cout << "4: Opcao 4" << endl;
    cout << "5: Opcao 5" << endl;
int Escolha;
cin >> Escolha;
switch (Escolha)
{
case 1: 
    cout << "Escolheu Opcao 1" << endl;
    break;
case 2: 
    cout << "Escolheu Opcao 2" << endl;
    break;
case 3: 
    cout << "Escolheu Opcao 3" << endl;
    break;
case 4: 
    cout << "Escolheu Opcao 4" << endl;
    break;
case 5: 
    cout << "Escolheu Opcao 5" << endl;
    break;
default: cout << "Opcao invalida" << endl;
    break;
    }
}