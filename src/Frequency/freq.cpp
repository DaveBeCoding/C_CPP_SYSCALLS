#include <iostream>
using namespace std;

int freq (int, int);

int main(int argc, char const *argv[])
{
    int num = 1332422523;
    int k = 2;
    cout << freq(num, k);
    return 0;
}

int freq (int num, int k)
{
    int c = 0;
    while (num > 0)
    {
        if (num%10 == k)
        {
            c++;
        }
        num /= 10;
        
    }

    return c;
    
}
