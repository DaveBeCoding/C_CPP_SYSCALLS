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