#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int i;
    int sum;
    int num = 1;
    cout << "Введите число: ";
    cin >> i;
    while (num < 11) {
        sum = i * num;
        cout << i << "*" << num << "=" << sum << endl;
        num++;
    }
    return 0;
}

