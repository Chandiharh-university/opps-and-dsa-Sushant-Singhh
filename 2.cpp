#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Some generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dogs bark." << endl;
    }
};

int main() {
    Animal animal;
    Dog dog;
    animal.sound(); 
    dog.sound();

    return 0;
}
