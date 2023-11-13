#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };

    int nonNegativeCount = 0;


    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            arr[nonNegativeCount++] = arr[i];
        }
    }


    for (int i = nonNegativeCount; i < size; ++i) {
        arr[i] = 0;
    }


    cout << "Массив без отрицательных элементов: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}