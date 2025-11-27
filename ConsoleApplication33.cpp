
#include <iostream>
using namespace std;
int main(){
	int figyra;
	int tupe;
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
		int i = 0;
		while (i < 10) {
			cout << "#";
			i++;
		}
	}
	else if (tupe == 2){
		int j = 0;
		while (j < 10) {
			cout << "#" << endl;
			j++;
		}
	else {
		cout << "ERROR" << endl;
	}
	return 0;
	}

	
	int _; cin >> _;
}