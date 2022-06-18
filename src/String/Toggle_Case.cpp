#include <iostream>

const char START_CHAR('a');
const int CHAR_TOGGLE(32);
const int BASE_START(65);
const char END_CHAR('z');
const int BASE_END(90);

int main(int argc, char const *argv[])
{
    char test[] = "ExAmPLe123";
    auto x = 0;
    for (; test[x] != '\0'; x++)
    {
        if (test[x] >= BASE_START && test[x] <= BASE_END)
        {
            test[x] +=
                CHAR_TOGGLE;
        }
        else if (test[x] >= START_CHAR && test[x] <= END_CHAR)
        {
            test[x] -=
                CHAR_TOGGLE;
        }
    }

    std::cout
        << "Flipping string "
        << test
        << std::endl;
    return 0;
}
