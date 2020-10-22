#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int *tablica;
    tablica = new int[argc - 1];

    for(int i = 1; i < argc; i++)
    {
        tablica[i] = (int)*argv[i];
    }
    
    for(int i = 1; i < argc; i++)
    {
        for(int j = i + 1; j < argc; j++)
        {
            if(tablica[i] > tablica[j])
            {
                swap(tablica[i], tablica[j]);
            }
        }
    }
    for(int i = 1; i < argc; i++)
    {
        cout << (char)tablica[i] << " ";
    }
    
    return 0;
}