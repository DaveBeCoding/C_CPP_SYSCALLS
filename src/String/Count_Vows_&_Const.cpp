#include <iostream>

const char START_CHAR('a');
const int CHAR_TOGGLE(32);
const int BASE_START(65);
const char END_CHAR('z');
const int BASE_END(90);

bool counter_V();

int main(int argc, char const *argv[])
{
    auto val_count = 0;
    auto const_count = 0;

    char test[] = "today was a good day";
    auto x = 0;
    for (; test[x] != '\0'; x++)
    {
        if (test[x] == 'a' || test[x] == 'e' || test[x] == 'i' || test[x] == 'o' || test[x] == 'u' || test[x] == 'A' || test[x] == 'E' || test[x] == 'I' || test[x] == 'O' || test[x] == 'U')
        {
            val_count++;
        }
        else if (test[x] >= BASE_START && test[x] <= BASE_END || test[x] >= START_CHAR && test[x] <= END_CHAR)
        {
            const_count++;
        }
    }

    std::cout
        << "Sentence consonants & vowel count\n"
        << val_count << " vowels"
        << std::endl
        << const_count << " consonants"
        << std::endl;
    return 0;
}