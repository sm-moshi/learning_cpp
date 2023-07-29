/*
   "You need to make a countdown app."
   "Given a number N as input, output numbers from N to 1 on separate lines."
   "Also, when the current countdown is a multiple of 5, the app should output "Beep"."
   /**/

#include <iostream>
using namespace std;

int main()
{
        int n;
        int zero = 0;

        cout << "Please enter a number from where to countdown has to start:\n"
             << endl;
        cin >> n;
        cout << "\n"
             << endl;

        for (n; n > 0; n--)
        {
                if (n % 5 == 0)
                {
                        cout << n << endl;
                        cout << "\nBeep\n"
                             << endl;
                }
                else /* if (n % 5 >=1) /**/
                {
                        cout << n << endl;
                }
                /* Excluding 0 from startpoint does not work yet.
                else {
                   cout << "Please enter a number above 0." << endl;
                } /**/
        }
        return 0;
}