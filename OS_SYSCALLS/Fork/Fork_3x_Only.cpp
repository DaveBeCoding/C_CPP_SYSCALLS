#include <iostream>
#include <unistd.h> // source -> man 2 fork

int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;

    int process_ID = fork();
    if (process_ID != 0 )
    {
        fork();

    }
    
    std::cout << "\nHello, World " 
                    << "Process : " << process_ID +'\n';
    return 0;
}
