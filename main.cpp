#include <iostream>
using namespace std;

int main() {

    setlocale(0, "");
    cout << "Программа 'Времена года'\n";
    cout << "[1] Лето\n";
    cout << "[2] Осень\n";
    cout << "[3] Зима\n";
    cout << "[4] Весна\n";

    int choice;
    cout << "Введите значение: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Сейчас лето, можно купаться и отдыхать на солнце.";
    }
    else if (choice == 2) {
        cout << "Сейчас осень, следует одеться тепло и взять с собой зонт.";
    }
    else if (choice == 3) {
        cout << "Сейчас зима, нужно надеть шапку и тёплое пальто.";
    }
    else if (choice == 4) {
        cout << "Сейчас весна, всё цветёт и становится теплее.";
    }
    else {
        cout << "Такого времени года нет.";
    }

    return 0;
}
