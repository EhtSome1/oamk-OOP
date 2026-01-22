#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
    chefName = name;
}
ItalianChef::~ItalianChef(){cout<<"ItalianChef "<<chefName<<" destruktori"<<endl;}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    if(pw == password)
    {
        cout<<"password OK "<<endl;
        flour = f;
        water = w;
        makepizza();
        return true;
    }
    else
    {
        cout<<"password FAIL"<<pw<<endl;
        return false;
    }
}
int ItalianChef::makepizza()
{
    int pizzas = ((flour/5)+(water/5))/2;
    cout<<"ItalianChef "<<chefName<< " with "<<flour<<" flour and "<<water<<" water can make "<<pizzas<<" pizzas"<<endl;
    return pizzas;
}
