#include <iostream>
#include <cstdlib>

using namespace std;

int game(int maxnum);

int main()
{
    int input = 0;
    cout << "Anna max numero: ";
    cin >> input;
    int pelinMaara = game(input);

    cout << "Arvausten maara: " << pelinMaara << endl;

    return 0;
}

int game(int maxnum)
{
    int maara = 0;
    int x = 99;
    srand(7);
    int luku = rand() % maxnum;
    //cout<<luku<<endl;
    while (x != luku)
    {
        maara++;
        cout << "arvaa luku: ";
        cin >> x;
        if(x > luku){cout<<"luku on pienempi"<<endl;}
        if(x < luku){cout<<"luku on isompi"<<endl;}
        if(x == luku){cout<<"luku on oikein"<<endl;}
    }
    return maara;
}
