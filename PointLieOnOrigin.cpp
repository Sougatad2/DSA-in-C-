#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "The point is at the origin." << endl;
    else if (x == 0)
        cout << "The point lies on the Y-axis." << endl;
    else if (y == 0)
        cout << "The point lies on the X-axis." << endl;
    else
        cout << "The point is neither on the axes nor at the origin." << endl;

    return 0;
}
