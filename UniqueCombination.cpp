#include <iostream>
using namespace std;

int main() {
    cout << "All unique combinations of 1, 2, 3 and 4 are:\n";

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j == i) continue; 
            for (int k = 1; k <= 4; k++) {
                if (k == i || k == j) continue; 
                for (int l = 1; l <= 4; l++) {
                    if (l == i || l == j || l == k) continue;
                    cout << i << j << k << l << endl;
                }
            }
        }
    }

    return 0;
}
