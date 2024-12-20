#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;

    animalPtr = &dog;
    animalPtr->sound();

    return 0;
}
