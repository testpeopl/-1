#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int mounth;
	int day;
	cout << "[+] Месяц года" << endl;
	cout << "[1] Январь" << endl;
	cout << "[2] Февраль" << endl;
	cout << "[3] Март" << endl;
	cout << "[4] Апрель" << endl;
	cout << "[5] Май" << endl;
	cout << "[6] Июнь" << endl;
	cout << "[7] Июль" << endl;
	cout << "[8] АВгуст" << endl;
	cout << "[9] Сентябрь" << endl;
	cout << "[10] Октябрь" << endl;
	cout << "[11] Ноябрь" << endl;
	cout << "[12] Декабрь" << endl;

	cout << "[+] выбрите месяц: ";
	cin >> mounth;

	switch (mounth) {
	case 1:
		cout << "[+] Выбран месяц “Январь”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
			break;
	case 2:
		cout << "[+] Выбран месяц “Февраль”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 3:
		cout << "[+] Выбран месяц “Март”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 4:
		cout << "[+] Выбран месяц “Апрель”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 5:
		cout << "[+] Выбран месяц “Май”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 6:
		cout << "[+] Выбран месяц “Июнь”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 7:
		cout << "[+] Выбран месяц “Июль”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 8:
		cout << "[+] Выбран месяц “Август”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 9:
		cout << "[+] Выбран месяц “Сентябрь”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 10:
		cout << "[+] Выбран месяц “Октябрь”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 11:
		cout << "[+] Выбран месяц “Ноябрь”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	case 12:
		cout << "[+] Выбран месяц “Декабрь”" << endl;
		cout << "введите день: ";
		cin >> day;
		cout << "Календарь: " << day << " Января" << endl;
		break;
	default:
		cout << "[+] нет такого месяца" << endl;
	}
	return 0;
}