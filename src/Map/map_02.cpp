/*

Map :: Complex data types inside map collection

*/

#include <iostream>
#include <string>
#include <list>
#include <map>

using namespace std;

// std=c++11 -Wall

int main()
{
    map<string, list<string>> Cards;

    list<string> Clubs{
        "Two of Clubs,",
        "Ten of Clubs,",
        "Jack of Clubs",
    };
    list<string> Diamond{"Ace of Diamond,",
                         "Nine of Diamond,",
                         "King of Diamond"};
    list<string> Hearts{"Queen of Hearts,",
                        "Seven of Hearts,", "Four of Hearts"};

    Cards.insert(pair<string, list<string>>("Player_one",
                                            Clubs));
    Cards.insert(pair<string, list<string>>("Player_two",
                                            Diamond));
    Cards.insert(pair<string, list<string>>("Player_three", Hearts));

    cout << endl;
    cout << "[-----------------------------Players Cards----------------------------]\n";
    for (auto pair : Cards)
    {
        cout << "\t" << pair.first
             << " -> ";

        for (auto suite : pair.second)
            cout << suite << " ";
        cout << endl;
    }
    cout << "[------------------------------Game Over-------------------------------]\n";

    return 0;
}
