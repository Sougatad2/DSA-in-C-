#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n && sum <= 300) {
        if (i % 5 == 0) {
            i++;
            continue;
        }
        sum += i;
        i++;
    }

    cout << "Final result: " << sum << endl;

    return 0;
}
