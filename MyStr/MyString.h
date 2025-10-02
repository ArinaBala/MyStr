#pragma once
#include <iostream>
#include <initializer_list>
using namespace std;

class MyString
{
    char* data;
    int size;
    static int objectCounter;

public:
    MyString();
    MyString(int s);
    MyString(const char* text);
    ~MyString();

    MyString(const MyString& object);
    MyString(MyString&& object);

    // Новый конструктор с initializer_list
    MyString(initializer_list<char> list);

    void Print();
    void CopyFrom(const MyString& object);
    bool Contains(const char* sub);
    int  FindChar(char c);
    int  Length();
    void Concat(MyString& object);
    void RemoveChar(char c);
    int  Compare(MyString& object);

    static void ShowCount();

    MyString operator+(MyString& object);
    MyString operator-(MyString& object);
    MyString operator*(int times);

    MyString& operator+=(const char* s);
    MyString& operator-=(const char* s);

    MyString& operator++();
    MyString& operator--();

    bool operator==(MyString& object);
    bool operator>(MyString& object);

    friend ostream& operator<<(ostream& os, MyString& s);
    friend istream& operator>>(istream& is, MyString& s);
};