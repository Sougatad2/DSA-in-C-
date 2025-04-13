#include <iostream>
using namespace std;

int main() {
    int x = 4, y = 2, z;  // Declare x, y, and z properly
    z = x++ * --y + ++x;  // Evaluate the expression
    cout << x << " " << y << " " << z; // Print values of x, y, and z
    return 0;
}
