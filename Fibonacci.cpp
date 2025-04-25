#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, nextTerm;

    cout << "Fibonacci Series up to 10 terms: ";
    cout << n1 << " " << n2 << " ";

    for (int i = 3; i <= 10; i++) {
        nextTerm = n1 + n2;
        cout << nextTerm << " ";
        n1 = n2;
        n2 = nextTerm;
    }
    cout << endl;

    return 0;
}
