#include <iostream>

class Animal {
public:
    virtual void sound() {
        std::cout << "The animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "The dog barks\n";
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound();  // Outputs: The dog barks
    delete animal;
    return 0;
}

