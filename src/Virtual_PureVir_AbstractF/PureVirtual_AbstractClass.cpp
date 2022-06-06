#include <iostream>
using namespace std;

// START .H FILE
int const INSTRUMENTS_PLAYING = 5;

class Instrument // Base, Absttract class
{
public:
    virtual void PlaySound() = 0; // Pure Virtual Fuction
};

class Violin : public Instrument // Derived
{
public:
    void PlaySound()
    {
        cout << "Violin is playing\n";
    }
};

class Piano : public Instrument
{
public:
    void PlaySound()
    {
        cout << "Piano is playing\n";
    }
};

class Drums : public Instrument // Derived
{
public:
    void PlaySound()
    {
        cout << "Drums is playing\n";
    }
};

class Flute : public Instrument
{
public:
    void PlaySound()
    {
        cout << "Flute is playing\n";
    };
};

class Guitar : public Instrument
{
public:
    void PlaySound()
    {
        cout << "Guitar is playing\n";
    }
};
// END .H FILE

int main(int argc, char const *argv[])
{
    // base                  derived
    Instrument *soundOne = new Violin;
    // soundOne->PlaySound();

    Instrument *soundTwo = new Piano;
    // soundTwo->PlaySound();

    Instrument *soundThree = new Drums;
    // soundThree->PlaySound();

    Instrument *soundFour = new Flute;
    // soundFour->PlaySound();

    Instrument *soundFive = new Guitar;
    // soundFive->PlaySound();

    Instrument *Concert[INSTRUMENTS_PLAYING] = {soundOne, soundTwo,
                                                soundThree, soundFour, soundFive};
    cout << "\n";
    for (auto i = 0; i < 5; i++)
    {

        cout << "\t";
        Concert[i]->PlaySound();
    }
    cout << "\n";

    return 0;
}
