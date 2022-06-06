#include <iostream>
using namespace std;

class Instrument // Base
{
public:
    virtual void PlaySound() // Most derived funct, invoked
    {
        cout << "Sound is playong... \n";
    }
};

class Violin : public Instrument // Derived
{
    void PlaySound()
    {
        cout << "Violin is playong...\n";
    }
};

int main(int argc, char const *argv[])
{
    // base                  derived
    Instrument *soundOne = new Violin;
    soundOne->PlaySound();

    return 0;
}
