#include <iostream>
using namespace std;

int main()
{
    int inicial, final;
    do
    {
        cout << "Ingrese el numero Inicial:";
        cin >> inicial;

        cout << "Ingrese el numero final:";
        cin >> final;

    } while (inicial > final);

    for (int i = inicial; i <= final; i++)

    {
        if (i % 2)
        {
            cout << "El numero " << i << " es par"<< endl;
        }
    }

    return 0;
}
