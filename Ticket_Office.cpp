/*
   "You are working on a ticketing system. A tickets costs $10"
   "The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group."
   "You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets."
   /**/

#include <iostream>
using namespace std;

int main() {
        int ages[5], i, min;
        int price = 50;
        min = ages[0];

        cout << "Please enter the age of each person of your group - separated by a single space:" << endl;
        for (int i = 0; i < 5; ++i) {
                cin >> ages[i];
        }

        min = ages[0];
        for (i = 0; i < 5; i++) {
                if (ages[i] < min) {
                        min = ages[i];
                }
        }

        cout << "The youngest person in your group is: " << endl;
        cout << min << endl;

        float discount = (price / 100.0) * min;
        float final_price = price - discount;

        cout << "The price for your tickets in $ is:" << endl;
        cout << final_price << endl;
        cout << "Have fun! :)" << endl;

        return 0;
}
