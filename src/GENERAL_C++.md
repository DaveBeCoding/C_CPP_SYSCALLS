# Scope resolution operator -> ::

#
##
###

- In C++11, function declaration:
        
        return-type identifier ( argument-declarations... )

and

        auto identifier ( argument-declarations... ) -> return_type

- They are equivalent.

#
##
###

# C -> 32 keywords += [C++ -> 52 keywords]

### Calculation of Modulus Operator in C
    Let us take a closer look at the internal calculation of the % operator in an available code in the C language:

    When p and q are integers, then

    p%q  will get resolved as p – (p/q) * q 

    Example,

        If p = 5 and q = 2, then 

        p % q >> p – (p/q) * q 

        5 % 2 >> 5 – (5/2) * 2 

        $ 5 – (2) * 2 $

        $ 5 – 4 $

        $1$

    Thus, p % q here is 1.

    If p = 9 and q = 8, then

        p % q >> p – (p/q) * q

        9 % 3 >> 9 – (9/8) * 8

        9 – (1) * 8

        9 – 8

        1

    Thus, p % q here is 1.

    If p = 8 and q = 5, then

        p % q >> p – (p/q) * q

        8 % 3 >> 8 – (8/5) * 5

        8 – (1) * 5

        8 – 5

        3

    Thus, p % q here is 3.

#
##
###


# LValue

- One can take an address from LValue
    - LValue appear on the left-side of the built-in assignment operator
    - LValue can bind to LValue References

```cpp
    int x = 0;
    int& a_ref = x;
    
    //also
    x;
```

- Member of object

```cpp
struct foo { int y }
foo f;
f.y;
```
- Function call returning LValue Reference

```cpp

int& funct();

&funct();

funct() = 7; // compileer makes no complaints 

```


# RValue
- RValue cannot appear on the left side of built-in assignment operator

```cpp 
5 = 0;
```

- Address of RValue cannot be taken, must be mutable
- Literals, functions that return by value
- RValue bind to RValue references, introduced in C++11

```cpp
int&& rv_ref0 = 5;
int&& rv_ref1 = bar();

```
- RValue example

```cpp

5;
10.99f;
9 * 10 + 9;

```

- LValue and RValue

```cpp
void foo(int&){std::cout << " LValue <- ";}
void foo(int&&){std::cout << " RValue <- ";}
//the compiler is smart enough to tell which functioin to choose, (C++11 >)
int x = o;
foo(a) //LValue
foo(5) //RValue

```


</ul>

# Why LValue and RValue
- C++03 ->

```cpp

std::vector<data> v0;
//I want to transfer ownership of resource
std::vector<data> v1 = v0; //this only copys

```

- >= C++11 ->

```cpp

std::vector<data> v0;
//I want to transfer ownership of resource
std::vector<data> v1 = std::move(v0); //transfers ownership, "(cast)"
 // with promise** not to use container once transfered, memory is valid, but useless**

```
- STL many classes are "move-aware" or "move-only"s
- std::move, performance and move-only friendly

#
##
###
####   

###     C++ Fundamental Data Types
|    Data Type | Bytes             |
| ------------ | ----------------- |   
| int          | Integer 2 or 4    |
| float        | Floating-Point 4  |
| double       | Floating-Point 8  |
| long         | 8                 |
| char         | Character 1       |
| bool         | Boolean 1         |
| void         | Empty 0           |
####   8 bits make a Byte

#
##
###
####   

# START HERE
- sample input
<!-- section template -->
https://riptutorial.com/markdown/example/5225/subscript-superscript
https://www.codegrepper.com/code-examples/css/jupyter+markdown+sigma
```cpp
using my_id = my_type; //test ali tdef
```
https://stackoverflow.com/questions/8208021/how-to-increment-a-pointer-address-and-pointers-value
https://stackoverflow.com/questions/14808908/pointer-to-2d-arrays-in-c
https://stackoverflow.com/questions/39397322/declaring-a-2d-array-using-double-pointer
https://stackoverflow.com/questions/9694838/how-to-implement-2d-vector-array
https://stackoverflow.com/questions/26937550/two-dimensional-vector-printing
https://www.srcmake.com/home/google-cpp-test-framework

https://www.section.io/engineering-education/an-introduction-to-machine-learning-using-c++/

https://www.statisticshowto.com/probability-and-statistics/regression-analysis/find-a-linear-regression-equation/

https://www.section.io/engineering-education/an-introduction-to-machine-learning-using-c++/  (double save)

<y'=a+bx> == < b<sub>0</sub>+b<sub>1</sub>X >

$$a^x=\sum_{i=0}^\infty \frac{1}{i!}x / \sum_{i=0}^\infty \frac{1}{i!}x^i$$


$$b^x=\sum_{i=0}^\infty \frac{1}{i!}x / \sum_{i=0}^\infty \frac{1}{i!}x^i$$

https://opensource.com/article/20/2/c-data-science
https://www.geeksforgeeks.org/algorithms-library-c-stl/

boost -> https://www.bogotobogo.com/cplusplus/boost.php
cmake located -> compiling

https://www.educative.io/answers/how-to-find-the-length-of-an-array-in-cpp

https://www.youtube.com/watch?v=lZ4VytXLNSo

# TEST

```cpp

#include <iostream>
#include "define.hpp"

void even_or_odd(int);
void ClearScreen();
int container_Size(int arr[]);

int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::endl;

    int unumbers[MAX], index = MAX - MAX;

    //freestyle::printME();
    msg3;
    cin.get();

    ClearScreen();

    msg1;
    msg2;
    try

    {
        while (CONDITIONS)
        {
            ClearScreen();
            msg1;
            msg2;

            promt1;
            promt2;
            promt3;
            funct1;

            index++;
        }
    }

    catch (const std::exception &e)
    {
        promt4;
        cin.get();

        std::cerr << e.what() << '\n';
    }
    return 0;
}

void even_or_odd(int num)
{
    using std::cout;
    using std::endl;

    if (num & 1)
        promt5;
    else
        promt6;
}

void ClearScreen()
{
    SYS_CLEAR;
}
```
