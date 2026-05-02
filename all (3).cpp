// FUNCTIONS // FUNCTIONS // FUNCTIONS // FUNCTIONS 
#include <bits/stdc++.h>
using namespace std;

// int printhello() {
// 	    cout << "hello\n";
// 	    return 5;
	    
// 	}

// Q1 calculate sum of numbers from 1 to n;

int sum(int n) {
    int sum = 0;
    for(int i=1;i<=n;i++) {
        sum+=i;
        
        
    }
    
    return sum;
    
}
	
	
int main() {
	
	
// 	int val = printhello();
// 	cout << "val is " << val << endl;
	cout<< sum(5) << endl;
	cout<< sum(12) << endl;
	return 0;
	

}
