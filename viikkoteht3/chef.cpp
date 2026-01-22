#include "chef.h"

Chef::Chef(string name) {
    chefName = name;
    cout<<endl<<endl<<"Chef "<<name<<" konstruktori"<<endl;
}
Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destruktori"<<endl;
}

int Chef::makeSalad(int ingredients){
    cout<<"Chef "<<chefName<<" with "<<ingredients<<" can make salad "<<ingredients/5<<" portions"<<endl;
    return ingredients / 5;
}
int Chef::makeSoup(int ingredients){
    cout<<"Chef "<<chefName<<" with "<<ingredients<<" can make soup "<<ingredients/3<<" portions"<<endl;
    return ingredients / 3;
}
string Chef::getName()
{
    return chefName;
}
