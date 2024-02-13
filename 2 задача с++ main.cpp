#include <iostream>
using namespace std;

int main() {
    int p;
    cout << "Введите число p: ";
    cin >> p;

    int x = (p % 10) * 100 + (p / 10 % 10) * 10 + p / 100;
    cout << "Число x: " << x << endl;

    return 0;
}
