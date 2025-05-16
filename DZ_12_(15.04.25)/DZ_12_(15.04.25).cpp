#include "Header.h"

int main() {
    int n, a, b;

	cout << "From 1 to n - #1\n";
    cout << "Print your num: ";
    cin >> n;
    From_1_to_N(n);
    cout << "\n";


    cout << "\nFrom A to B - #2\n";
    cout << "Print your 2 nums: ";
    cin >> a >> b;
    From_A_to_B(a, b);
    cout << "\n";


    cout << "\nExact power of two - #3\n";
    cout << "Print your 2 nums: ";
    cin >> a >> b;
    cout << (Exact_power_of_two(a) ? "YES" : "NO") << "\n";
    cout << (Exact_power_of_two(b) ? "YES" : "NO") << "\n";


    cout << "\nThe sum of the digits of the number - #4\n";
    cout << "Print your num: ";
    cin >> n;
    cout << sumDigits(n) << "\n";


    cout << "\nThe digits of the number from right to left - #5\n";
    cout << "Print your num: ";
    cin >> n;
    printDigitsReverse(n);
    cout << "\n";


	cout << "\nDigits of the number from left to right - #6\n";
    cout << "Print your num: ";
    cin >> n;
    printDigitsForward(n);
    cout << "\n";


	cout << "\nReverse of a number - #7\n";
    cout << "Print your num: ";
    cin >> n;
    cout << reverseNumber(n) << "\n";
}