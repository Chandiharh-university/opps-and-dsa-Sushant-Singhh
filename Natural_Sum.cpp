#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "enter no: ";
    cin >> a;

    cout << "Table of " << a << "\n";
    for (int i = 1; i <= 10; ++i) {
        cout << a << " x " << i << " = " << a * i << endl;
    }
    return 0;
}
