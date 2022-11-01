#include <iostream>
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;



void identify_identical(int values[], int n) {
int i, j;
for (i = 0; i < n; i++) {
for (j = i+1; j < n; j++) {
if (values[i] == values[j]) {
printf("Twin integers found.\n");
return;
}
}
}
printf("No two integers are alike.\n");
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
