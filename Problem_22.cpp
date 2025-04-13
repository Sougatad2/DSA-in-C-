#include<iostream>
using namespace std;

int main(){
    int x = 0, y = 10;
    bool result = (x != 0) && (y / x > 2);
    cout << result;
    return 0;
}