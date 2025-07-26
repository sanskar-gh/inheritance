#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void func()
    {
        cout << "hello!" << endl;
    }
};

class Student : public Human
{
public:
    int marks;

    Student(string name, int age, int marks) : Human(name, age)
    {
        this->marks = marks;
    }

    void display(void)
    {
        cout << this->name << " " << this->age << " " << this->marks << endl;
    }
};

int main()
{
    Student s1("Ram", 13, 100);
    s1.display();
    return 0;
}