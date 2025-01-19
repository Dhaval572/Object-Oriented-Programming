// Abstract class 
#include <iostream>
using namespace std;

class A
{
public:
    
    virtual void greet() = 0;
};

class B : public A
{
public:

    void greet() override
    {
        cout << "Good Afternoon all!";
    }
};

int main()
{
    B obj;
    obj.greet();
    return 0;
}
