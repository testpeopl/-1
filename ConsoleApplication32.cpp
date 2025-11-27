#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	cout << "Ведите число:";
	cin >> a;
	if (a == 1) {
		cout << "Лето" << endl;
	}
	else if (a == 2) {
		cout << "Зима" << endl;
	}
	else if (a == 3) {
		cout << "Весна" << endl;
	}
	else if (a == 4) {
		cout << "Осень" << endl;
	}
	else {
		cout << "Ошибка" << endl;
	}
	return 0;
}