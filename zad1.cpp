#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int *tablica = nullptr;
    tablica = new int[argc - 1];

    for(int i = 1; i < argc; i++)
    {
        tablica[i] = atoi(argv[i]);
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
        cout << tablica[i] << " ";
    }
    
    delete [] tablica;
    tablica = NULL;
    
    return 0;
}
