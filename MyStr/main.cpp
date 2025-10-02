#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
   
        MyString obj1{ 'H','e','l','l','o' };
        obj1.Output(); // Выведет: Hello

        MyString obj2{ 'W','o','r','l','d' };
        obj2.Output(); // Выведет: World

        return 0;
    
    cout << "Objects before: ";
    MyString::ShowCount();

    MyString a("Hello");
    MyString b("world");

    cout << "Objects now: ";
    MyString::ShowCount();

    ++a;          // Hello + ïðîáåë
    a.Print();

    --a;          // óáðàëè ïîñëåäíèé ñèìâîë
    a.Print();

    a += "world"; // Helloworld
    a.Print();

    a -= "lo";    // Heworld
    a.Print();

    cout << "a == b ? " << (a == b) << endl;
    cout << "a > b  ? " << (a > b) << endl;

    if (a.Length() == 0)
    {
        cout << "String is empty\n";
    }
    else
    {
        cout << "String is not empty\n";
    }

    cout << "Objects after: ";
    MyString::ShowCount();

    MyString a;

    cout << "Enter a string: ";
    cin >> a;
    cout << "You entered: " << a << endl;
    return 0;
}