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
