#include <iostream>
#include <string.h>
using namespace std;

class Hero
{

public:
    string name;
    Hero(string name)
    {
        cout << this << endl;
        this->name = name;
        // cout << "Inside constructor" << endl;
    }

private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // dynamic allocation of objects

    // int *i=new int; this int is alloctaed in heap memory

    Hero *h = new Hero("shivansh");
    cout << h->name << endl;
    h->setHealth(10);
    cout << h->getHealth() << endl;

    // cout << "before initializing" << endl;
    // Hero ramesh("shivansh");
    // cout << "after initializing" << endl;
    // cout << ramesh.name << endl;
    // cout << &ramesh << endl;

    return 0;
}