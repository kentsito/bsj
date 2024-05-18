#include <iostream>

using namespace std;

int main()
{

    int numeros[2][3];

    numeros[0][0] = 8;
    numeros[0][1] = 23;
    numeros[0][2] = 76;
    numeros[1][0] = 10;
    numeros[1][1] = 14;
    numeros[1][2] = 55;

    for (int filas = 0; filas <= 1; filas++)
    {
        for (int col = 0; col <= 2; col++)
            cout << numeros[filas][col] << " ";

        cout << endl;
    }
}
