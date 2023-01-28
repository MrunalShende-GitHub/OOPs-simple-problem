#include<bits/stdc++.h>
using namespace std;

class animals
{
    public:
     virtual void print()                  //This is how late binding is done using virtual keyword.
    {                                      //
        cout<<"Print Animal."<<endl;
    }
    void show()
    {
        cout<<"Show Animal"<<endl;
    }

};

class monkey : public animals
{
    public:
    void print()
    {
        cout<<"Print Donkey"<<endl;
    }

    void show()
    {
        cout<<"Show Donkey"<<endl;
    }
};

int main()
{
    animals *bptr;
    monkey d;
    bptr = &d;                  //bptr is a pointer to the base class which is animals and stores the address of derieved class which is monkey
    //means base class has address of derieved class but in static/early binding(compile time) it returns what is in base class ie animals
    //but if we use virtual keyword it overrides and returns what is in derieved class 
    //that is late/dynamic binding and happens during runtime thats why called  run time polymorphism. 
    bptr->print();
    bptr->show();
}