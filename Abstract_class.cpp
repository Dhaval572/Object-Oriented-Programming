// Implementation of pure virtual function
#include <iostream>
using namespace std;

// Main abstract class
class Base
{
public:

    virtual void show() = 0;
};

// Derived abstract class
class Mid : public Base
{
public:

    virtual void display() = 0;
};

// Main Derived class 
class Final : public Base, Mid
{
public:

    void show()
    {
        cout << "Base class function" << endl;
    }

    void display()
    {
        cout << "Mid class function" << endl;
    }
};

int main()
{
    Final obj;
    obj.show();
    obj.display();

    return 0;
}
