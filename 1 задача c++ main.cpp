#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int e, f, g, h;
    cout << "e: ";
    cin >> e;
    cout << "f: ";
    cin >> f;
    cout << "g: ";
    cin >> g;
    cout << "h: ";
    cin >> h;

    double a = sqrt(fabs(e - (4.0 / f))) * sqrt(fabs(e - (4.0 / f))) * sqrt(fabs(e - (4.0 / f))) * sqrt(fabs(e - (4.0 / f))) + g;
    double b = sin(e) + pow(cos(h), 4) * h;
    double c = (44.0 * g) / (e * f - 4);

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
