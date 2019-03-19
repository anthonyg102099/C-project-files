#include <iostream>
using namespace std;

void sayHi(string name, int age);

int main ()
{


    sayHi("Anthony", 19);
    sayHi("Max", 20);
    sayHi("Ethan", 21);

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << " years old!" << endl;
}
