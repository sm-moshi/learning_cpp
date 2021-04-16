#include <iostream>
using namespace std;

bool isPalindrome(int x) {
        int a, z = 0;
        a = x;

        while (a != 0)
        {
                z *= 10;
                z = z + a % 10;
                a = a / 10;
        }
        if (x == z)
                return isPalindrome;
        else
                return false;
}

int main() {
        int n;
        cout << "Please enter a number to check if it's a palindrome!" << endl;
        cin >>n;

        if(isPalindrome(n)) {
                cout << n << " is a palindrome!" << endl;
        }
        else {
                cout << n << " is NOT a palindrome!" << endl;
        }
        return 0;
}
