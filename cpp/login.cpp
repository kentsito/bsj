#include <iostream>
using namespace std;

int main()
{
    string usuario, contrasena;
    int veces = 1;
    bool continuar = true;

    do
    {
        cout << "Ingrese su usuario:";
        cin >> usuario;

        cout << "Ingrese contraseña:";
        cin >> contrasena;

        if (usuario == "kenneth" && contrasena == "abc123")
        {
            cout << "Bienvenidos" << endl;
            continuar = false;
        }

        if (veces >= 3)
        {
            cout << "Has excedido el número de intentos" << endl;
            continuar = false;
        }
        veces++;
    } while (continuar);

    return 0;
}
