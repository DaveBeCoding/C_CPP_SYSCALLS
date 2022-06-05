#include <iostream>

void example(int, int); //prototype

int main(int argc, char const *argv[])
{
    example(9,1);
    return 0;
}

void example(int a, int b) //definition 
{
    std::cout << a + b << std::endl;
}
