#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    printf("PID of exec_program_01 = %d\n", getpid());
    char *args[] = {"Example", "of", "Exec", NULL};
    execv("./exec_02", args);
    printf("Return to exec_program_01");
    
    return 0;
}

/*

exec - System call

Description:

In computing, exec is a functionality of an 
operating system that runs an executable 
file in the context of an already existing process, 
replacing the previous executable. 
This act is also referred to as an overlay. 
It is especially important in Unix-like systems, 
although it exists elsewhere

*/
