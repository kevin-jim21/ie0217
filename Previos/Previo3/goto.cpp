// Ejemplo funcionamiento goto presentacion pag 5

#include <iostream>
using namespace std;

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximun number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;

        if(num < 0.0)
        {
            /* En este caso, el programa al entrar a este bloque logico
            saltara hasta el label "jump", saltandose todas las lineas que se
            encuentren antes de este label. Cabe destacar que el uso del goto
            es considerado una mala practica de programacion, por lo que no se
            debe utilizar a menos que la unica solucion para el funcionamiento
            de un codigo implique utilizarlo.*/
            goto jump;
        }
        sum += num;
    }

jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;

    return 0;
}