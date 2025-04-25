#include <iostream>
using namespace std;

int main() {
    int a, b, hcf, lcm;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    lcm = (a * b) / hcf;

    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
