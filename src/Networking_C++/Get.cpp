#include <iostream>
#include <cpr/cpr.h>
// gumbo (parser)
#define DEFAULT_PAGE "https://en.wikipedia.org/wiki/Wikipedia"
/*
1. Build function for GET request
2. Pass GET response to parser function
3. Pass parsed string(s) to file for python dataframe(s)
*/

using namespace std;

std::string get_extract();
void element_lookup(/*GumboNode *node*/);
void links(/*GumboNode *node*/);

int main(int argc, char **argv)
{
    std::cout << get_extract() << std::endl;
    return 0;
}

std::string get_extract(/*pass args for user selected site*/)
{
    auto response = cpr::Get(
        cpr::Url{DEFAULT_PAGE},
        cpr::VerifySsl{false});
    return response.text;
}