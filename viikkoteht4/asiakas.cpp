#include "asiakas.h"

Asiakas::Asiakas(string name, double limit) : kayttotili(name), luottotili(name, limit) {
    nimi = name;
    cout<<"Asiakkuus luotu "<<nimi<<":lle"<<endl;
}

string Asiakas::getNimi() {
    return nimi;
}

void Asiakas::showSaldo(){
    cout<<"Kayttotilin saldo: "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;
}
bool Asiakas::talletus(double amount){
    return kayttotili.deposit(amount);
}
bool Asiakas::nosto(double amount){
    return kayttotili.withdraw(amount);
}
bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}
bool Asiakas::luotonNosto(double amount){
    return luottotili.withdraw(amount);
}
bool Asiakas::tiliSiirto(double amount, Asiakas &kohde){
    if (amount < 0){
        cout<<"Tilisiirto: Ei voi siirtaa negatiivista maaraa"<<endl;
        return false;
    }
    else if (amount > kayttotili.getBalance()){
        cout<<"Tilisiirto: Ei voi siirtää enemmän mitä on"<<endl;
        return false;
    }
    else{
        cout<<"Pankkitili: "<<nimi<<" siirtaa "<<amount<<" "<<kohde.getNimi()<<":lle"<<endl;
        cout<<nimi<<" ";
        kayttotili.withdraw(amount);
        cout<<kohde.getNimi()<<" ";
        kohde.talletus(amount);
        return true;
    }
}
