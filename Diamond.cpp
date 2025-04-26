#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    int totalRows = m + (n - m + 1);

    for(int i = 1; i <= totalRows; i++) {
        int stars;

        if(i <= m) {
            stars = i;
        } else {
            stars = totalRows - i + 1;
        }

        int spaces = m - stars + 1;

        for(int s = 0; s < spaces; s++) {
            cout << " ";
        }

        for(int j = 1; j <= stars; j++) {
            if(j == 1 || j == stars) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
