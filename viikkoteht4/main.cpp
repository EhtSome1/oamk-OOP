#include "asiakas.h"

#include <iostream>

using namespace std;

int main()
{
    Asiakas Aapeli("Aapeli", 2000);

    Aapeli.showSaldo();

    cout<<endl;

    Aapeli.luotonNosto(200);
    Aapeli.showSaldo();

    Aapeli.luotonMaksu(100);

    Aapeli.showSaldo();



    /*Aapeli.talletus(250);
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
    Bertta.showSaldo();*/

    return 0;
}
