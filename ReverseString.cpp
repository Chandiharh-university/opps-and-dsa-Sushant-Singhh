#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string i;
    cout << "Enter ";
    getline(cin, i);
    reverse(i.begin(), i.end());
    cout << "Reversed order: " << i << endl;
    return 0;
}
