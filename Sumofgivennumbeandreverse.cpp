#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original, remainder;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    int sum = original + reversed;
    cout << "Sum of " << original << " and its reverse (" << reversed << ") is: " << sum << endl;

    return 0;
}
