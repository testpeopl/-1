#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "9 * 1" << endl;
    cout << "введите число: ";
    cin >> num;
    if (num == 9) {
        cout << "все верно";
    }
    else
        cout << "ошибка";

    
    int num2 = 0;
    cout << "9 * 2" << endl;
    cout << "введите число: ";
    cin >> num;
    if (num2 == 18) {
        cout << " Примеры решены, поздравляем! ";
    }
    else
        cout << "Ошибка, пример решен неверно!";
}