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


<h1>LValue</h1>

<p><u><li>One can take an address from LValue</li>
<li>LValue appear on the left-side of the built-in assignment operator</li>
<li>LValue can bind to LValue References</li></u></p>

```cpp
    int x = 0;
    int& a_ref = x;
    
    //also
    x;

```
<ul>
<li>Member of object</li>
</ul>

```cpp
struct foo { int y }
foo f;
f.y;
```
<ul>
<li>Function call returning LValue Reference</li>
</ul>

```cpp

int& funct();

&funct();

funct() = 7; // compileer makes no complaints 

```


<h1>RValue</h1>
<ul>
<li>RValue cannot appear on the left side of built-in assignment operator</li>
</ul>

```cpp 
5 = 0;
```
<ul>
<li>Address of RValue cannot be taken, must be mutable</li>
<li>Literals, functions that return by value</li>
<li>RValue bind to RValue references, introduced in C++11 </li>

```cpp
int&& rv_ref0 = 5;
int&& rv_ref1 = bar();

```
<li>RValue example</li>

```cpp

5;
10.99f;
9 * 10 + 9;

```

<li>LValue and RValue</li>

```cpp
void foo(int&){std::cout << " LValue <- ";}
void foo(int&&){std::cout << " RValue <- ";}
//the compiler is smart enough to tell which functioin to choose, (C++11 >)
int x = o;
foo(a) //LValue
foo(5) //RValue

```


</ul>

<h1>Why LValue and RValue</h1>
<ul>
<li>C++03 -></li>

```cpp

std::vector<data> v0;
//I want to transfer ownership of resource
std::vector<data> v1 = v0; //this only copys

```

<li> >= C++11 -> </li>

```cpp

std::vector<data> v0;
//I want to transfer ownership of resource
std::vector<data> v1 = std::move(v0); //transfers ownership, "(cast)"
 // with promise** not to use container once transfered, memory is valid, but useless**



```
<li>STL many classes are "move-aware" or "move-only"s </li>
<li>std::move, performance and move-only friendly</li>

</ul>


<h1>START HERE</h1>
<ul><li></li></ul>




<!-- section template -->
<h1>START HERE</h1>   
<ul><li></li></ul>

###     C++ Fundamental Data Types

    |    Data Type | Bytes             |
    | ------------ | ----------------- |   
    | int          | Integer 2 or 4    |
    | ------------ | ----------------- |
    | float        | Floating-Point 4  |
    | ------------ | ----------------- |
    | double       | Floating-Point 8  |
    | ------------ | ----------------- |
    | long         | 8                 |
    | ------------ | ----------------- |
    | char         | Character 1       |
    | ------------ | ----------------- |
    | bool         | Boolean 1         |
    | ------------ | ----------------- |
    | void         | Empty 0           |
    | ------------ | ----------------- |

####    8 bits make a Byte

| Data Type      | Description |
| -------------- | ----------- |
| Header         | Title       |
| Paragraph      | Text        |