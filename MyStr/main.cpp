#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    MyString obj1{ 'H','e','l','l','o' };
    obj1.Print(); // Hello

    MyString obj2{ 'W','o','r','l','d' };
    obj2.Print(); // World

    cout << "Objects before: ";
    MyString::ShowCount();

    MyString a("Hello");
    MyString b("world");

    cout << "Objects now: ";
    MyString::ShowCount();

    ++a;          // Hello + пробел
    a.Print();

    --a;          // убрали последний символ
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

    MyString c;

    cout << "Enter a string: ";
    cin >> c;
    cout << "You entered: " << c << endl;

    return 0;
}
