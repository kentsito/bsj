#include <iostream>
using namespace std;

int main()
{
    int numero;
    do
    {
        cout << "Digite un numero entre 1 y 10:";
        cin >> numero;

    } while ((numero < 1) || (numero > 10));

    for (int i = 1; i <= 10; i++)
    {
        cout << numero << "x" << i << " = " << numero * i << endl;
    }

    return 0;
}
