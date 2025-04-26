#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << char(j + 64);
        }

        cout << endl;
    }

    return 0;
}
