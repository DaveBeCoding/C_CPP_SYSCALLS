#include <iostream>

std::string isPalindrome(std::string S)
{
    std::string P = S;

    reverse(P.begin(), P.end());

    if (S == P)
        return "Yes";
    else
        return "No";
}

int main()
{
    std::string S = "ABCDCBA";
    std::cout << isPalindrome(S);
    return 0;
}
