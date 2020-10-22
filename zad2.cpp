#include <iostream>

using namespace std;

bool sprawdzenie(char *znaki, int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
        if(znaki[i] != znaki[rozmiar-i])
            return false;

    return true;
}

int main(int argc, char *argv[])
{

    string znaki = argv[1];
    cout << "podales nastepujacy ciag znakow: " << znaki << endl;
    int rozmiar = znaki.length();
    rozmiar--;
    if(sprawdzenie(&znaki[0], rozmiar) == 1)
        cout << "jest to palindrom tekstowy" << endl;
        else
        {
           cout << "to nie jest palindrom tekstowy" << endl;
        }

    return 0;
}
