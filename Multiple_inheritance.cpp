// About multiple Multiple inheritance 
#include <iostream>
using namespace std;

class Num1
{
public:
	int a;
	Num1(int a)
	{
		this->a = a;
	}

	~Num1()
	{
		cout << "Memory dellocated of object of Num1 class\n";
	}
};

class Num2
{
public:
	int b;
	Num2(int b)
	{
		this->b = b;
	}

	~Num2()
	{
		cout << "Memory dellocated of object of Num2 class\n";
	}
};

class Derived : public Num1, Num2
{
public:

	int c;
	Derived(int a, int b) : Num1(a), Num2(b)
	{
		this->c = a + b;
		cout << "Addition of " << a << " and " << b << " is: " << c << endl;
	}

	~Derived()
	{
		cout << "Memory dellocated of object of Derived class\n";
	}
};

int main()
{
	Derived sum(10, 40);
	return 0;
}
/*
Explaination: 

	Multiple inheritance in C++ is a feature where a class can inherit from more than one base class.

	Syntax of multiple inheritance:

		class Derived_class : access_modifiers base_class1, access_modifiers base_class2, ...
		{
			// Methods and data of class
		}


	So, this was basic and short explanation of multiple inheritance.

	I hope you understand

*/
