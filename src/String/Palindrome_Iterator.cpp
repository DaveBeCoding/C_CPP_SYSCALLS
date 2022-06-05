#include <iostream>

// program for string iterator... begin(), end(), rbegin(), rend()
int main()
{
    std::string str;
    std::cout << "Input String :";
    std::cin >> str;

    std::string::iterator it;
    std::string::reverse_iterator it1;

    std::string forward;
    std::string backward;
    std::string::iterator itf;
    std::string::reverse_iterator itb;

    std::cout << "The string using forward iterators is : ";
    for (it = str.begin(); it != str.end(); it++)
        std::cout << *it;
    std::cout << std::endl;

    std::cout << "The reverse string using reverse iterators is "
                 ": ";
    for (it1 = str.rbegin(); it1 != str.rend(); it1++)
        std::cout << *it1;
    std::cout << std::endl;

    // TURN INTO FUNCT, D.R.Y
    for (itf = str.begin(); itf != str.end(); itf++)
        forward += *itf;

    for (itb = str.rbegin(); itb != str.rend(); itb++)
        backward += *itb;

    if (forward == backward)
        std::cout << "String is palindrome" << std::endl;
    else
        std::cout << "String is not palindrome" << std::endl;

    return 0;
}
