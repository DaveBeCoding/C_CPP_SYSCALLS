// Concept of Virtual Functions

#include<iostream>

class Base {
public:
	virtual void print()
	{
		std::cout << "print base class\n";
	}

	void show()
	{
		std::cout << "show base class\n";
	}
};

class Derived : public Base {
public:
	void print()
	{
		std::cout << "print derived class\n";
	}

	void show()
	{
		std::cout << "show derived class\n";
	}
};

int main()
{
	Base *base_ptr;
	Derived derived;
	base_ptr = &derived;

	// Virtual, bind->runtime
	base_ptr->print();

	// Non-virtual, bind->compile time
	base_ptr->show();
	
	return 0;
}

