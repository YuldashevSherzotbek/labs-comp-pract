#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int reversedNumber = 0;
    int temp = number;

    while (temp > 0) {
        reversedNumber = reversedNumber * 10 + temp % 10;
        temp /= 10;
    }

    return number == reversedNumber;
}

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << "Число является палиндромом." << endl;
    } else {
        cout << "Число не является палиндромом." << endl;
    }

    return 0;
}
