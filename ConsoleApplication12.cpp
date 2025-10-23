#include <iostream>
using namespace std;

int main()
{
    char operation;
    double num1, num2, result;
    cout << "калькулятор";
    cout << "введите число 1: ";
    cin >> num1;
    cout << "введите число 2: ";
    cin >> num2;
    if (operation == '+') {
        result = num1 + num2;
        cout << result << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << result << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << result << endl;
    }
    else if (operation == '/'){
        if (num2 !=0)
        result = num1 / num2;
        cout << 











    return 0;
}
