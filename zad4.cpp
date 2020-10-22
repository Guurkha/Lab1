#include <iostream>

using namespace std;

int dzielenie_modulo(int liczba)
{
    int suma = 0;
    for(int i = 1; i < liczba; i++)
        if((liczba % i) == 0)
        {
            cout << " " << i;
            suma = suma + i;
        }
    return suma;

}

int main()
{
    int a = 0;
    int suma1 = 0;
    int suma2 = 0;
    int b = 0;

    cout << "podaj liczbe a: ";
    cin >> a;

    cout << "podaj liczbe b: ";
    cin >> b;

    cout << "dzielniki liczby a to:" << endl;
    suma1 = dzielenie_modulo(a);
    cout << endl << "suma to dzielnikow liczby a to: " << suma1 << endl;

    cout << endl << "dzielniki liczby b to:" << endl;
    suma2 = dzielenie_modulo(b);
    cout << endl << "suma to dzielnikow liczby b to: " << suma2 << endl;

    if((suma1 == b + 1)&&(suma2 == a + 1))
    {
        cout << "liczba " << a << "oraz liczba " << b << "sa skojarzone" << endl;
    }
    return 0;
}
