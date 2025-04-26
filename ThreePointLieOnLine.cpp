#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of three points (x1, y1, x2, y2, x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (area == 0)
        cout << "The points lie on the same straight line." << endl;
    else
        cout << "The points do not lie on the same straight line." << endl;

    return 0;
}
