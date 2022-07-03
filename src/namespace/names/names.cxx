#include <iostream>

namespace Hello 
{
    void SAY_HI(){
    using std::cout;
    using std::endl;
    cout 
    <<
    "Hello"
    << 
    endl;
    }
}


int main(int argc, char const *argv[])
{
    Hello::SAY_HI();
    return 0;
}
