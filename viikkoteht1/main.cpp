#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x = 99;
    int luku = rand() % 20;
    while (x != luku)
    {
        cout << "arvaa luku: ";
        cin >> x;
        if(x < luku){cout<<"luku on pienempi";}
    }
    return 0;
}
