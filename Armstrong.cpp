#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    cout << "Armstrong numbers in the range:\n";
    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0;
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
