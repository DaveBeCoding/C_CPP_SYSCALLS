#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    printf("We are in EXEC_Program_02\n");
    printf("PID of EXEC_Program_02 =%d\n", getpid());
    
    return 0;
}
