#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num;
	int sum = 0;
	int u = 0;
	cout << "напиши число: ";
	cin >> num;
	while (num != 0) {
		sum += num;
		cout << "введите ещё число: ";
		cin >> num;
		u++;
	}
	cout << "сумма: " << sum << endl;
	cout << "Количество чисел: " << u << endl;
	return 0;
}