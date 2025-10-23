#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "[ ] Введите число: ";
    cin >> number;
 
    if (number >= 0 && number <= 10) {
        cout << "[ ] Цифра в диапазоне: 1 - 10" << endl;
    }
    else if (number >= 11 && number <= 20) {
        cout << "[ ] Цифра в диапазоне: 11 - 20" << endl;
    }
    else if (number >= 21 && number <= 30) {
        cout << "[ ] Цифра в диапазоне: 21 - 30" << endl;
    }
    else if (number >= 31 && number <= 40) {
        cout << "[ ] Цифра в диапазоне: 31 - 40" << endl;
    }
    else if (number >= 41 && number <= 50) {
        cout << "[ ] Цифра в диапазоне: 41 - 50" << endl;
    }
    else if (number >= 51 && number <= 60) {
        cout << "[ ] Цифра в диапазоне: 51 - 60" << endl;
    }
    else if (number >= 61 && number <= 70) {
        cout << "[ ] Цифра в диапазоне: 61 - 70" << endl;
    }
    else if (number >= 71 && number <= 80) {
        cout << "[ ] Цифра в диапазоне: 71 - 80" << endl;
    }
    else if (number >= 81 && number <= 90) {
        cout << "[ ] Цифра в диапазоне: 81 - 90" << endl;
    }
    else if (number >= 91 && number <= 100) {
        cout << "[ ] Цифра в диапазоне: 91 - 100" << endl;
    }
    else {
        if (number < 0) {
            cout << "[ ] Ошибка! Число меньше 0." << endl;
        }
        else {
            cout << "[ ] Ошибка! Число больше 100." << endl;
        }
    }

    return 0;
}

