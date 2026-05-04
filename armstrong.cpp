#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int digits  = to_string(n).length();  
    int sum      = 0;
    int temp     = n;

    while(temp != 0) {
        int digit = temp % 10;            
        sum =sum+ pow(digit, digits);         
        temp =temp/ 10;                        
    }

    if(sum == original)
        cout << original << " is an Armstrong number" << endl;
    else
        cout << original << " is NOT an Armstrong number" << endl;

    return 0;
}

