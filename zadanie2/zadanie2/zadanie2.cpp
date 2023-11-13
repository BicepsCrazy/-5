#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    char station;

    cout << "Введите букву станции (A, B, C, D, E): ";
    cin >> station;


    station = tolower(station);

    switch (station) {
    case 'a':

        cout << "Время в пути до станции A: 16ч";
        break;
    case 'b':

        cout << "Время в пути до станции B: 3ч";
        break;
    case 'c':

        cout << "Время в пути до станции C: 12ч";
        break;
    case 'd':

        cout << "Время в пути до станции D: 2ч";
        break;
    case 'e':

        cout << "Время в пути до станции E: 5ч";
        break;
    default:
        cout << "Некорректный ввод. Пожалуйста, введите букву от A до E.";
    }

    return 0;
}
