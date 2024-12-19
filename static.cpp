#include <iostream>
using namespace std;

class camp {
public:
    static int c;
    camp() {
        c++; 
    }

    static void displayCount() { 
        cout << "Count: " << c << endl;
    }
};
int camp::c = 0;
int main() {
    camp obj1, obj2; 
    camp::displayCount(); 

    camp obj3; 
    obj3.displayCount(); 

    return 0;
}
