#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
