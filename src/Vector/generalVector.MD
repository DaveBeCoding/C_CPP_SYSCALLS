```cpp
cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());
 
    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());
 
    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);
    
    
    
    // Counts the occurrences of 20 from 1st to
    // last element
    cout << count(vect.begin(), vect.end(), 20);
 
    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
```

```js

https://www.geeksforgeeks.org/c-magicians-stl-algorithms/

https://www.freecodecamp.org/news/cpp-vector-how-to-initialize-a-vector-in-a-constructor/

https://stackoverflow.com/questions/2236197/what-is-the-easiest-way-to-initialize-a-stdvector-with-hardcoded-elements

```
