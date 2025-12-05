#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
int i;
int b = 0;
cout << "Введите число: " << endl;
cin >> i;
while (i != 0) {
	i = i / 10;
	b++;
}
cout << "Количество цифр:" << b << endl;
return 0;
}
