#include <iostream>
#include <cmath>
using namespace std;

int findMinAngle(int hour, int minutes) {
    
    if (hour >= 12) {
        hour -= 12;
    }

    
    int hourAngle = 30 * hour + 0.5 * minutes;
    int minuteAngle = 6 * minutes;


    int angle = abs(hourAngle - minuteAngle);


    return min(angle, 360 - angle);
}

int main() {
    int hour = 9, minutes = 0; 

    cout << "Minimum angle between hour and minute hand: " << findMinAngle(hour, minutes) << " degrees" << endl;

    return 0;
}
