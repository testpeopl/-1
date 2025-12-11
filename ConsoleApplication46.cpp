#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	char i[] = "12345";
	char n[100];

	while (strcmp(n, i) != 0) {
		cout << "Введите пароль: " << endl;
		cin >> n;
		if (strcmp(n, i) != 0) 
			cout << "неверно" << endl;
	}
	cout << "Добро пожаловать!" << endl;
	return 0;
}
