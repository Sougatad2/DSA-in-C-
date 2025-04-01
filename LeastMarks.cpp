#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter marks of A, B, and C: ";
    cin >> A >> B >> C;

    int minMarks = min(A, min(B, C));

    if (minMarks == A) cout << "Student A scored the least marks: " << A << endl;
    else if (minMarks == B) cout << "Student B scored the least marks: " << B << endl;
    else cout << "Student C scored the least marks: " << C << endl;

    return 0;
}
