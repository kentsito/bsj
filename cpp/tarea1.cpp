#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    float raizC, num1, num2, den;
    float x1, x2;

    cout << "Ingrese la variable a: " << endl;
    cin >> a;
    cout << "Ingrese la variable b: " << endl;
    cin >> b;
    cout << "Ingrese la variable c: " << endl;
    cin >> c;

    raizC = sqrt(pow(b, 2) - 4 * a * c);
    num1 = b * -1 + raizC;
    num2 = b * -1 - raizC;
    den = 2 * a;
    x1 = num1 / den;
    x2 = num2 / den;
    cout << "El Resultado es: " << x1 << " y " << x2 << endl;

    return 0;
}