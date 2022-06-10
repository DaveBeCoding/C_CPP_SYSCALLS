#include <iostream>
#include <cpr/cpr.h>

using namespace std;

int main(int argc, char **argv)
{

    auto url = cpr::Url{"https://en.wikipedia.org/wiki/Wikipedia"};
    // auto parameters = cpr::Parameters{{"hello", "world"}};
    cpr::Session session;
    session.SetUrl(url);
    // session.SetParameters(parameters);
    session.SetVerifySsl(false);

    auto r = session.Get();
    cout << r.text << endl;
}