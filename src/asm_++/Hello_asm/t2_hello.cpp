#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello, World" << endl;
    vector<string> user_Text;
    string x;

    while (std::getline(std::cin, x) && x != "-1")
    {
        user_Text.push_back(x);
    }

    typedef vector<string>::size_type vctr_sz;
    vctr_sz size = user_Text.size();
    cin.clear();

    cout << "";
    cout << std::setw(10) << " Word lookup ";

    string targetWord;
    cin >> targetWord;

    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (targetWord == user_Text[i])
        {
            count++;
        }
    }

    cout << "The target word [" << targetWord << "] was "
                                                 "in the search text "
         << count << " times." << endl;

    return 0;
}
