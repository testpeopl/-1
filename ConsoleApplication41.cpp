#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int i;
    cout << "Введите число: ";
    cin >> i;
    while (i > 0) {
        cout << "Отсчет:" << i << endl;
        i--;
    }
    cout << "Старт!";

    return 0;
}

