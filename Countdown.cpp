/*
"You need to make a countdown app."
"Given a number N as input, output numbers from N to 1 on seperate lines."
"Also, when the current countdown is a multiple of 5, the app should output "Beep"."
/**/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter a number from where to countdown has to start." << endl;
    cin >> n;

    for (n;n > 0; n--) {
      if (n % 5 == 0) {
        cout << n << endl;
        cout << "Beep" << endl;

      }
      else {
        cout << n << endl;
      }
    }

    return 0;
}
