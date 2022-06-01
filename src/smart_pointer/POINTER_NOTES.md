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