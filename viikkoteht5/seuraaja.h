#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <iostream>

using namespace std;

class Seuraaja
{
public:
    Seuraaja *next = nullptr;
    string nimi;

    Seuraaja(string);
    string getNimi();
    void paivitys(string);
};

#endif // SEURAAJA_H
