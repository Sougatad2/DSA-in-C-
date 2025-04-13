#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter the First Side : ";
    cin >> a;
    cout << "Enter the Second Side : ";
    cin >> b;
    cout << "Enter the Third Side : ";
    cin >> c;

    if(a == b == c){
        cout << "Equilateral Triangle";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Isosceles Triangle";
    }
    else{
        cout << "Scalene Triangle";

    }
    
}