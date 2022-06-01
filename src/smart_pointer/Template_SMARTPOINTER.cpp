#include <iostream>

const int HOLD_VALUE(1000000);
// A generic smart pointer class
template <class T>
class SmartPtr {
	T* ptr; // Actual pointer
public:
	// Constructor
    // 
	// explicit SmartPtr(T* p = NULL) { ptr = p; }
    explicit SmartPtr(T* p = NULL) : ptr(p) { }

	// Destructor
	~SmartPtr() { delete (ptr); }

	// Overloading dereferencing operator
	T& operator*() { return *ptr; }

	// Overloading arrow operator so that
	// members of T can be accessed
	// like a pointer (useful if T represents
	// a class or struct or union type)
	T* operator->() { return ptr; }
};

int main()
{
	SmartPtr<int> ptr(new int());
	*ptr = HOLD_VALUE;
	std::cout << *ptr << std::endl;
	return 0;
}

