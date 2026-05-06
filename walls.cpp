#include <iostream>
using namespace std;

int main() {
    char str[100];
    int count = 0;

    cout << "Enter string: ";
    cin >> str;   

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]== 'o' || str[i]=='u' || str[i] == 'A' || str[i]=='E' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
       
    }

    cout << "Vowels = " << count;

    return 0;
}
