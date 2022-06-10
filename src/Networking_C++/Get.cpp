#include <iostream>
#include <cpr/cpr.h>
// gumbo (parser)

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
    /*


    */
    auto url = cpr::Url{"https://en.wikipedia.org/wiki/Wikipedia"};
    // auto parameters = cpr::Parameters{{"hello", "world"}};
    cpr::Session session;
    session.SetUrl(url);
    // session.SetParameters(parameters);
    session.SetVerifySsl(false);

    auto r = session.Get();
    cout << r.text << endl;

    // work on parser for string/element extraction
}
