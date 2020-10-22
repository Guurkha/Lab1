#include <iostream>

using namespace std;

enum wskaznik_BMI {
    wyglodzenie,
    wychudzenie,
    niedowaga,
    wartosc_prawidlowa,
    nadwaga,
    I_stopien_otylosci,
    II_stopien_otylosci,
    otylosc_skrajna,
};

int jakie_BMI(int BMI)
{
    if(BMI < 16)
        return wyglodzenie;
    else if((16<=BMI)&&(BMI<=16.99))
        return wychudzenie;
    else if((17<=BMI)&&(BMI<=18.49))
        return niedowaga;
    else if((18.5<=BMI)&&(BMI<=24.99))
        return wartosc_prawidlowa;
    else if((25<=BMI)&&(BMI<=29.99))
        return nadwaga;
    else if((30<=BMI)&&(BMI<=34.99))
        return I_stopien_otylosci;
    else if((35<=BMI)&&(BMI<=39.99))
        return II_stopien_otylosci;
    else if(BMI > 40)
        return otylosc_skrajna;
}

int main()
{
    float masa_ciala;
    float wzrost;
    float BMI;

    cout << "podaj swoja wage" << endl;
    cin >> masa_ciala;
    cout << "podaj swoj wzrost" << endl;
    cin >> wzrost;

    cout << "twoja waga to: " << masa_ciala << endl;
    cout << "twoj wzrost to " << wzrost << endl;

    BMI = (masa_ciala)/(wzrost * wzrost);
    cout << "wartosc BMI to " << BMI << endl;

    switch(jakie_BMI(BMI))
    {
    case wyglodzenie:
        cout << "wyglodzenie" << endl;
        break;
    case wychudzenie:
        cout << "wychudzenie" << endl;
        break;
    case niedowaga:
        cout << "niedowaga" << endl;
        break;
    case wartosc_prawidlowa:
        cout << "wartosc prawidlowa" << endl;
        break;
    case nadwaga:
        cout << "nadwaga" << endl;
        break;
    case I_stopien_otylosci:
        cout << "I stopien otylosci" << endl;
        break;
    case II_stopien_otylosci:
        cout << "II stopien otylosci" << endl;
        break;
    case otylosc_skrajna:
        cout << "otylosc skrajna" << endl;
        break;
    default:
        cout << "cos posz³o zle" << endl;
        break;
    }

    return 0;
}
