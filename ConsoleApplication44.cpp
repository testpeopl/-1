#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num;
	int sum = 0;
	int u = 0;
	int arif;
	cout << "напиши число: ";
	cin >> num;
	while (num != 0) {
		sum += num;
		cout << "введите ещё число: ";
		cin >> num;
		u++;
		arif = sum / u;
	}
	cout << "Среднее арифметическое	 " << arif << endl;
	
	return 0;
}