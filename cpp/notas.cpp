#include <iostream>
using namespace std;
int main()
{
    float nota1, nota2, nota3, nota4, promedio;

    cout << "Ingrese nota 1:" << endl;
    cin >> nota1;

    cout << "Ingrese nota 2:" << endl;
    cin >> nota2;

    cout << "Ingrese nota 3:" << endl;
    cin >> nota3;

    cout << "Ingrese nota 4:" << endl;
    cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "Tu promedio es: " << promedio << "%" << endl;

    if (promedio <= 59)
        cout << "Debe Mejorar" << endl;
    else if (promedio >= 60 && promedio <= 69)
        cout << "Tú puedes Mejorar"  << endl;
     else if (promedio >= 70 && promedio <= 89)
        cout << "Buen Trabajo" << endl;
     else  
        cout << "Excelente Trabajo!"  << endl;

        

    return 0;
}
