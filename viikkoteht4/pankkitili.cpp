#include "pankkitili.h"

Pankkitili::Pankkitili(string name) {
    omistaja = name;
    cout<<"Pankkitili luotu "<<omistaja<<":lle"<<endl;
}

double Pankkitili::getBalance(){
    return saldo;
}

bool Pankkitili::deposit(double amount){
    if (amount < 0){
        cout<<"Pankkitili: Ei voi tallettaa negatiivisia lukuja"<<endl;
        return false;
    }
    else if (amount == 0){
        cout<<"Pankkitili: Ei rahaa talletettavana"<<endl;
        return false;
    }
    else if(amount > 0){
        cout<<"Pankkitili: Talletus "<<amount<<" tehty"<<endl;
        saldo += amount;
        return true;
    }
}

bool Pankkitili::withdraw(double amount){
    if (amount < 0){
        cout<<"Pankkitili: Ei voi nostaa negatiivisia lukuja"<<endl;
        return false;
    }
    else if (amount == 0){
        cout<<"Pankkitili: Ei voi nostaa 0"<<endl;
        return false;
    }
    else if(amount < getBalance()){
        cout<<"Pankkitili: nosto "<<amount<<" tehty"<<endl;
        saldo -= amount;
        return true;
    }
    else if(amount > getBalance()){
        cout<<"Pankkitili: Ei voi nostaa enemman mita on"<<endl;
        return false;
    }
}
