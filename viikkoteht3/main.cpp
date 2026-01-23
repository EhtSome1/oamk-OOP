#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef gordon("Gordon");

    gordon.makeSalad(11);
    gordon.makeSoup(14);

    ItalianChef mario("Mario");

    mario.makeSalad(9);
    mario.askSecret("pizza", 20,10);
    return 0;
}
