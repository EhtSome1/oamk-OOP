#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori notif;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");
    Seuraaja d("D");
    Seuraaja e("E");
    Seuraaja f("F");
    Seuraaja g("G");

    notif.lisaa(&a);
    notif.lisaa(&b);
    notif.lisaa(&c);
    notif.lisaa(&d);
    notif.lisaa(&e);
    notif.lisaa(&f);
    notif.lisaa(&g);
    notif.tulosta();

    notif.postita("Viesti 1");

    notif.poista(&g);

    notif.postita("Viesti 2");

    return 0;
}
