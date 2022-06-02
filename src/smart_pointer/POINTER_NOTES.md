# Raw ptr vs Smart Ptr   

- When ownership is not an issue, use raw ptr -> Example

    ```cpp
    
    void PrintObject(shared_ptr<const Object> po) //bad
    {
        if(po)
          po->Print();
        else
          log_error();
    }
    
    void PrintObject(const Object* po) //good
    {
        if(po)
          po->Print();
        else
          log_error();
    }
    
    ```

- When ownership is being considered/used, use smart ptr -> Example

```cpp
Object* createObject() //bad
{
    return new Object;
}Í

some_smart_ptr<Object> createObject() //good
{
   return some_smart_ptr<Object>(new Object);
}

```

## What is ownership/Resources, Pointers</h2>
- Resources need to be acquired and released</li>
- Examples; Dynamic Memory, Files, and Threads ... -> Resources</Examples;>
- "Unique OwnerShip" ... single owner of a resource who is responsible for acquiring & releasing resource</li>
- Access to resource is only possible through its owner</li>


<h1>Pointers/RAW</h1>   

```cpp
int *ptr[10];

This is an array of 10 int* pointers, not as you would assume, a pointer to an array of 10 ints

int (*ptr)[10];

This is a pointer to an array of 10 int

It is I believe the same as int *ptr; in that both can point to an array, but the given form can ONLY point to an array of 10 ints
```

<hr>

```cpp
void pointerFuncA(int* ptr){
  /*Print the value pointed to by ptr*/
  printf("Value:  %d\n", *ptr );
    
  /*Print the address pointed to by ptr*/
  printf("Value:  %p\n", ptr );

  /*Print the address of ptr itself*/
  printf("Value:  %p\n", &ptr );
}

// get an address
int x = 123;
int* foo = &x;
```


<h1>Pointers/Smart</h1>   


<!-- section template -->
<h1>START HERE</h1>   
<ul><li></li></ul>
