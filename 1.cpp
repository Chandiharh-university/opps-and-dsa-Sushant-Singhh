#include <iostream>
using namespace std;


double add(int a, int b) {
    return a + b;
}

//int add(int a, int b, int c) {
  ////  return a + b + c;
//}

//double add(double a, double b) {
   // return a + b;
//}

int main() {
    
    cout << "Sum of 5 and 10: " << add(5, 10) << endl;
//cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << endl;
   // cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << endl;

    return 0;
}
