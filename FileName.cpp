#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person() { cout << "His a person.\n"; }
    void priName();
protected:
    string Name;
};

class Man:virtual public Person
{
public:
    Man() { cout << "His a man.\n"; }
};

class Teacher:virtual public Person
{
public:
    Teacher() { cout << "His a teacher.\n"; }
};

class Alex:public Man,public Teacher
{
public:
    Alex() { Name = "Alex"; cout << "His name is "; }
};

int main()
{
    Alex alex;
    alex.priName();

    cout << "--------------------" << endl;
    system("pause");
}

void Person::priName()
{
    cout << Name << "." << endl;
}