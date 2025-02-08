// Abstract class in c++ language
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Declare abstract method
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();    
    Shape *shape2 = new Rectangle(); 

    shape1->draw(); 
    shape2->draw(); 

    delete shape1;
    delete shape2;

    return 0;
}
