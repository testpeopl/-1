#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num;
	int sum = 0;
	cout << "напиши число: ";
	cin >> num;
	while (num != 0) {
		sum += num;
			cout << "введите ещё число: ";
			cin >> num;
	}
	cout << "сумма: " << sum << endl;
		return 0;
}
