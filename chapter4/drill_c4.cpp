#include "std_lib_facilities.h"

int main()
{
    int i = 0;
    vector<double> n(2);
    double mayor = 0;
    double menor = 1000;
    while (i < 2)
    {
        cout << "dijite el numero " << i + 1 << ":";
        cin >> n[i];

        if (n[i] > mayor)
        {
            mayor = n[i];
            cout<<"el numero mayor hasta ahora es: "<<mayor<<"\n";
        }
        if (n[i] < menor)
        {
            menor = n[i];
            cout<<"el numero menor hasta ahora es: "<<menor<<"\n";
        }
        ++i;
    }
    cout << "el primer numero digitado es: " << n[0]
         << " y el segundo numero digitado es: " << n[1]
         << ".\nEl numero mayor es: " << mayor << ", y el numero menor es: " << menor << "\n";
    if (abs(n[0] - n[1]) < 0.01)
    {
        cout << "la diferencia entre los dos numeros es menor de 1/100\n";
    }
    else
    {
        cout << "la diferencia entre los dos numeros es mayor de 1/100\n";
    }

    keep_window_open("|");
    return 0;
}