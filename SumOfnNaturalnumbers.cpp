#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    int term = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        term = term * 10 + 2;
        sum += term;
    }

    cout << "Output: Sum of above series is: " << sum << endl;

    return 0;
}
