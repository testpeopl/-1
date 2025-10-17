#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	cout << "введите число:";
	cin >> a;
	if (a == 1) {
		cout << "Лето, тепло и жарко" << endl;
	}
	else if (a == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт" << endl;
	}
	else if (a == 3) {
		cout << "зима, сскоро новвй год" << endl;
	}
	else if (a == 4) {
		cout << "веста, скоро лето" << endl;
	}
	else {
		cout << "такого времени года нет" << endl;
	}
	return 0;
}