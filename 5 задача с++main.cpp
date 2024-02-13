#include <iostream>
#include <vector>
#include <cstdlib> // Для использования функции rand()
using namespace std;

int main() {
    vector<int> arr(10); // Создаем массив размером 10
    vector<int> neg_arr;
    vector<int> pos_arr;

    // Генерация случайного массива
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 21 - 10; // Генерация чисел от -10 до 10
    }

    // Перепись элементов в новые массивы
    for (int num : arr) {
        if (num < 0) {
            neg_arr.push_back(num);
        } else {
            pos_arr.push_back(num);
        }
    }

    // Вывод результатов
    cout << "Исходный массив: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Новый массив: ";
    for (int num : neg_arr) {
        cout << num << " ";
    }
    for (int num : pos_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
