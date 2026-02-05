#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja *seur){
    cout<<"Notifikaattori lisaa seuraajan "<<seur->nimi<<endl;
    if (seuraajat == nullptr){
        seuraajat = seur;
    }
    else{
        seur->next = seuraajat;
        seuraajat = seur;
    }
}

void Notifikaattori::poista(Seuraaja *seur){
    cout<<"Notifikaattori poistaa seuraajan "<<seur->getNimi()<<endl;
    Seuraaja *ed = nullptr;
    Seuraaja *ny = nullptr;
    Seuraaja *se = seuraajat;

    if(seur == seuraajat){
        seuraajat = seuraajat ->next;
    }
    else {
        while (ny != seur){
            cout<<" loop ";
            ed = ny;
            ny = se;
            se = se -> next;
        }
        ed ->next = se;

        cout<<" "<<endl;
    }
}

void Notifikaattori::tulosta(){
    cout<<"Notifikaattorin seuraajat: "<<endl;
    Seuraaja *o = seuraajat;
    while (o != nullptr){
        cout<<"Seuraaja "<<o -> getNimi()<<endl;
        o = o ->next;
    }
}

void Notifikaattori::postita(string viesti){
    cout<<"Notifikaattori postaa viestin "<<viesti<<endl;

    Seuraaja *o = seuraajat;
    while (o != nullptr){
        o ->paivitys(viesti);
        o = o ->next;
    }
}
