#include <iostream>
using namespace std;

class a {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
  int add()
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    a calc;

    cout << "Sum" << calc.add(2554, 3545) << endl;
    cout << "Sum" << calc.add(14, 247, 4785) << endl;
    cout << "Sum" << calc.add(247.5, 3781.755) << endl;

    return 0;
}

bubble sort
