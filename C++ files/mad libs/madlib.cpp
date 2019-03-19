#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    string color, pnoun, celebrity;

    cout << "Type the name of a color." << endl;
    getline(cin, color);

    cout << "Give me a plural noun." << endl;
    getline(cin, pnoun);

    cout << "Type the name of a celebrity!" << endl;
    getline(cin, celebrity);


    cout << "   " << endl;
    cout << "Here is your Mad Lib!" << endl;
    cout << "Roses are " << color << endl;
    cout << pnoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;



}
