/*.....A program to highlight the concept of copy constructor.......... */
#include <iostream>

class Param_Copy_Constructor
{
private:
    int x;

public:
    Param_Copy_Constructor(int a) : x(a) {}                       // parameterized constructor to initialize l and b
    Param_Copy_Constructor(Param_Copy_Constructor &b) : x(b.x) {} // copy constructor with reference object argument

    int display() // function to display
    {
        return x;
    }
};

int main()
{
    Param_Copy_Constructor c1(2);  // initializing the data members of object 'c' implicitly
    Param_Copy_Constructor c2(c1); // copy constructor called
    Param_Copy_Constructor c3 = c1;
    Param_Copy_Constructor c4 = c2;
    std::cout << "example c1 = " << c1.display() << std::endl;
    std::cout << "example c2 = " << c2.display() << std::endl;
    std::cout << "example c3 = " << c3.display() << std::endl;
    std::cout << "example c4 = " << c4.display() << std::endl;
    return 0;
}