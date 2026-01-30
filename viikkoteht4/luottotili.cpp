#include "luottotili.h"

Luottotili::Luottotili(string name, double limit) : Pankkitili(name) {
    omistaja = name;
    luottoRaja = limit;
    saldo = limit;

    cout<<"Luottotili luotu "<<omistaja<<":lle, luottoraja "<<luottoRaja<<endl;
}

bool Luottotili::deposit(double amount) {
    if (amount < 0){
        cout<<"Luottotili: Ei voi tallettaa negatiivisia lukuja"<<endl;
        return false;
    }
    else if (amount == 0){
        cout<<"Luottotili: Ei rahaa talletettavana"<<endl;
        return false;
    }
    else if(amount > 0 && saldo+amount <= 0){
        saldo += amount;
        luottoRaja += amount;
        cout<<"Luottotili: talletus "<<amount<<" tehty, luottoa jaljella"<<luottoRaja<<endl;
        return true;
    }
    else if(saldo+amount > 0){
        cout<<"Luottotili: Ei voi tallettaa enemman mita on velkaa"<<endl;
        return false;
    }
}

bool Luottotili::withdraw(double amount){
    if (amount < 0){
        cout<<"Luottotili: Ei voi nostaa negatiivisia lukuja"<<endl;
        return false;
    }
    else if (amount == 0){
        cout<<"Luottotili: Ei voi nostaa 0"<<endl;
        return false;
    }
    else if(saldo - amount <= 0){
        cout<<"Luottotili: Ei voi vetaa rajaa enemman"<<endl;
        return false;
    }
    else{
        saldo -= amount;
        luottoRaja -= amount;
        cout<<"Luottotili: nosto "<<amount<<" tehty, luottoa jaljella "<<luottoRaja<<endl;
        return true;
    }
}
