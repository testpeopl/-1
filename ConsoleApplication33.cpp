
#include <iostream>
using namespace std;
int main(){
	int figyra;
	int negta;
	int tupe;
	char form;
	setlocale(0, "");
	cout << "[+] фигуры" << endl;
	cout << "[1] линия" << endl;
	cin >> figyra;
	if (figyra == 1) {
		cout << "[+] Фигура: “Линия”" << endl;
		cout << "[1] Горизонтальная" << endl;
		cout << "[2] Вертикальная" << endl;
		cin >> tupe;
	}
	else {
		cout << "ERROR" << endl;
	}
	if (tupe == 1) {
		cout << "введите длинну: ";
		cin >> negta;
		cout << "Текстура линии: ";
		cin >> tupe;
		int i = 0;
		while (i < negta) {
			cout << tupe;
			i++;
		}
	}
	else if (tupe == 2) {
		cout << "введите длинну: ";
		cin >> negta;
		cout << "Текстура линии: ";
		cin >> tupe;
		int j = 0;
		while (j < negta) {
			cout << tupe << endl;
			j++;
		}
	}
	else {
		cout << "ERROR" << endl;
	}
	return 0;
	

	
	int _; cin >> _;
}