#include <iostream>
using namespace std;
    
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside function: a = " << a << " b = " << b << endl;
}

int main() {
    int x, y;

    cout << "Enter two numbers to swap: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << " y = " << y << endl;

    swap(x, y);   

    cout << "After swap: x = " << x << " y = " << y << endl;

    return 0;
}


