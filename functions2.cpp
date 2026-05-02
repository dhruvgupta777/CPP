#include <bits/stdc++.h>
using namespace std;

 // FUNCTIONS   // FUNCTIONS     // FUNCTIONS  // FUNCTIONS
 // FUNCTIONS   // FUNCTIONS    // FUNCTIONS   // FUNCTIONS

//  int printhello() {
     
//      cout << "hello\n";
     
//      return 5;
     
//  }
// int main() {


// //     int val =  printhello();
// //      printhello();
   
// //   cout << "the value is " << val << endl;

// cout << printhello() << endl;
//  }


// SUM OF TWO NUMBERS

// int sum(int a, int b) {
//     int sum = a+b;
//     return sum;
// }

// int main() {
    
//   cout <<   sum(5,88); 
// }


// MINIMUM OF TWO NUMBERS

// double min_two(double a , double b) {
    
//     if (a>b) {
        
 
//         return b;
      
//     }
    
//     else {
        
//      return a;
//     }
//     }
    
    
    
//     int main() {
        
//         cout  << min_two(8,4) << endl;
//     }


// SUM OF NUMBERS FROM 1 TO NUMBERS

// int sum(int n) {
    
//     int sum = 0;
    
//     for(int i = 1;i<=n;i++) {
        
//         sum = sum + i;
//     }
//     return sum;
// }

// int main () {
    
//     cout << " sum is " << sum(45) << endl;
// }


// CALCULATION OF N FACTORIAL

int fact(int n) {
    
    int fact = 1;
    
    for (int i = 1;i<=n ; i++ ) {
        
        fact = fact*i;
    }
    
    return fact;
}

int main() {
    cout << " the factorial is " << fact(5) << endl;
    cout << " the factorial is " << fact(50) << endl;
    cout << " the factorial is " << fact(0) << endl;
    cout << " the factorial is " << fact(6) << endl;
}