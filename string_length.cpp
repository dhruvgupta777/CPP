#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(i = 0; str[i] != '\0'; i++);

    cout << "Length of string = " << i;

    return 0;
}
