//Reverse a number with overflow and underflow check

#include <bits/stdc++.h>
using namespace std;

void reverse(int x) {
    int revNum = 0;
    while (x != 0) {
        int ld = x % 10;  // Extract the last digit
        x = x / 10;       // Remove the last digit

        // Overflow check
        if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && ld > 7)) {
            cout << "Overflow occurred! Reversal not possible." << endl;
            return;  // Exit the function
        }

        // Underflow check
        if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && ld < -8)) {
            cout << "Underflow occurred! Reversal not possible." << endl;
            return;  // Exit the function
        }

        revNum = (revNum * 10) + ld;  // Update the reversed number
    }

    cout << "Reversed number: " << revNum << endl;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    reverse(n);   
    return 0;
}
