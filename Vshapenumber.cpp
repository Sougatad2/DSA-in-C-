#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
       
        for(int s = 0; s < n - i; s++) {
            cout << " ";
        }

      
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                cout << i;
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
