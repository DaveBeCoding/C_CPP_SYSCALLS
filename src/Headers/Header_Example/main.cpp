#include "iostream"

// using namespace std;

#include "sum.h"

int main()
{

    int a = 35, b = 22;

    std::cout << "Int total : "
              << sum_Two_int(a, b)
              << std::endl;
}

// namespace std 42881 vs directly calling stream/io method 42878 -> line count