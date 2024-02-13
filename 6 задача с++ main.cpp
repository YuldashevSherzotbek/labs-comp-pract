#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int num1, num2;
    cout << "Введите два натуральных числа: ";
    cin >> num1 >> num2;

    int sum1 = sumOfDigits(num1);
    int sum2 = sumOfDigits(num2);

    if (sum1 > sum2) {
        cout << "Сумма цифр первого числа больше." << endl;
    } else if (sum2 > sum1) {
        cout << "Сумма цифр второго числа больше." << endl;
    } else {
        cout << "Суммы цифр обоих чисел равны." << endl;
    }

    return 0;
}
