#include <iostream>
using namespace std;

class Student
{
private:
    int a;

protected:
    int c;

public:
    int b;
    void fun(void)
    {
        a = 19;
        c = 14;
        b = 12;

    }
    void display()
    {
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    }
};
int main()
{
    Student s;
    // s.a = 12;
    // s.b = 13;
    // s.c = 15;
    s.fun();
    s.display();
    return 0;
}