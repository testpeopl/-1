#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	srand(time(NULL))
int i = 0;
	while (i < 100) {
		int number = rand() % 11;
		if (number == 10) {
			cout << "\x1b[91m" << number << "\x1b[0m" << endl;
		}
		else {
			cout << number << endl;
		}
		i++;
	}
	int _; cin >> _;
	return 0;
}