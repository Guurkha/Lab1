#include <iostream>
#include <iomanip>

using namespace std;

void wypisanie_tablicy(int tablica[][3])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << setw(4);
            cout << tablica[i][j];
        }
        cout << endl;
    }
}

int mnozenie_tablic(int tablica1[][3], int tablica2[][3])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            tablica1[i][j] += tablica2[i][j];
        }
    }
    return tablica1[2][3];
}

int main()
{
    int tablica1[2][3] = {1, 2, 3,
                          4, 5, 6,};

    int tablica2[2][3] = {10, 22, 34,
                          42, 54, 61,};

    cout << "tablica 1" << endl;
    wypisanie_tablicy(tablica1);
    cout << "tablica 2" << endl;
    wypisanie_tablicy(tablica2);

    mnozenie_tablic(tablica1, tablica2);

    cout << "po dodaniu" << endl;
    wypisanie_tablicy(tablica1);
    
    return 0;
}

