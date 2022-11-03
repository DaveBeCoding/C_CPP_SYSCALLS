#include <iostream>
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;


//ex1
void identify_identical(int values[], int n) {
int i, j;
for (i = 0; i < n; i++) {
for (j = i+1; j < n; j++) {
if (values[i] == values[j]) {
printf("Twin integers found.\n");
std::cout << i << " i and j " << j << std::endl;
return;
}
}
}
printf("No two integers are alike.\n");
}



//ex2 - second function to wrap around array, still buggy
int identical_right(int snow1[], int snow2[],
int start) {
int offset, snow2_index;
for (offset =0; offset < 6; offset++) {
snow2_index = start + offset;
if (snow2_index >= 6)
snow2_index = snow2_index - 6;
if (snow1[offset] != snow2[snow2_index])
return 0;
}
return 1;
}

//ex3 - start right and move around to the left
int identical_right(int snow1[], int snow2[], int start) {
int offset;
for (offset =0; offset < 6; offset++) {
if (snow1[offset] != snow2[(start + offset) % 6])
return 0;
}
return 1;
}

//wrap around to the left,s start left and move right
int identical_left(int snow1[], int snow2[], int start)
{

int offset, snow2_index;
for (offset =0; offset < 6; offset++) {
snow2_index = start - offset;
if (snow2_index < 0)
snow2_index = snow2_index + 6;
if (snow1[offset] != snow2[snow2_index])
return 0;
}
return 1;
}

int main(int argc, char const *argv[])
{
    //int foo = some_really_hard_math(10,5);

    //std::cout << "Sampel project -> Plug & Play -> update 00ß" << std::endl;
    //std::cout << foo << "\n";

     int a[5] = {1, 2, 3, 1, 5};
     identify_identical(a, 5);	
       
	return 0;
}
