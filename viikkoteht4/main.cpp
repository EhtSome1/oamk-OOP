#include "asiakas.h"

#include <iostream>

using namespace std;

int main()
{
    Asiakas Aapeli("Aapeli", 1000);

    Aapeli.showSaldo();

    cout<<endl;

    Aapeli.talletus(250);
    Aapeli.luotonNosto(150);
    Aapeli.showSaldo();

    cout<<endl;

    Asiakas Bertta("Bertta", 1000);
    Bertta.showSaldo();

    cout<<endl;

    cout<<Aapeli.getNimi()<<endl;
    Aapeli.showSaldo();
    Aapeli.tiliSiirto(50, Bertta);

    cout<<endl;

    cout<<Bertta.getNimi()<<endl;
    Bertta.showSaldo();

    return 0;
}
