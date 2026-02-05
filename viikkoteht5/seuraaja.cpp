#include "seuraaja.h"

Seuraaja::Seuraaja(string name) {
    nimi = name;
    cout<<"Luodaan seuraaja "<<nimi<<endl;
}

string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::paivitys(string viesti){
    cout<<"Seuraaja "<<nimi<<" sai viestin "<<viesti<<endl;
}
