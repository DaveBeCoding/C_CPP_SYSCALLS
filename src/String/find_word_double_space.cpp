#include <iostream>

const char START_CHAR('a');
const int CHAR_TOGGLE(32);
const int BASE_START(65);
const char END_CHAR('z');
const int BASE_END(90);

int main(int argc, char const *argv[])
{
    char test[] = "today was a good day, Ice   Cube   eight";
    auto word(1);
    auto x = 0;
    for (; test[x] != '\0'; x++)
    {
        if (test[x] == ' ' && test[x - 1] != ' ')
        {
            word++;
        }
    }

    std::cout
        << "Number of words "
        << word
        << std::endl;
    return 0;
}
