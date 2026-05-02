#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string chars = "abcdefghijklmnopqrstuvwxyz"
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                   "0123456789"
                   "!@#$%^&*()_+-=[]{}|;:,.<>?";

    int length;
    cout << "Enter password length: ";
    cin >> length;

    srand(time(0));

    string password = "";

    for (int i = 0; i < length; i++) {
        int index = rand() % chars.length();
        password += chars[index];
    }

    cout << "Generated Password: " << password << endl;

    return 0;
}