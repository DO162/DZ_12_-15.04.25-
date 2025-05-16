#include <iostream>
using namespace std;

void From_1_to_N(int n) {
    if (n == 0) return;
    From_1_to_N(n - 1);
    cout << n << " ";
}

void From_A_to_B(int a, int b) {
    cout << a << " ";
    if (a == b) return;
    if (a < b) From_A_to_B(a + 1, b);
    else From_A_to_B(a - 1, b);
}

bool Exact_power_of_two(int n) {
    if (n == 1) return true;
    if (n == 0 || n % 2 != 0) return false;
    return Exact_power_of_two(n / 2);
}

int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}

void printDigitsReverse(int n) {
    if (n == 0) return;
    cout << n % 10 << " ";
    printDigitsReverse(n / 10);
}

void printDigitsForward(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printDigitsForward(n / 10);
    cout << n % 10 << " ";
}

int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}