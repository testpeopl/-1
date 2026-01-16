#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int menu;
	int i = 0;
	string name = "user";
	int lives = 3;
	int point = 0;
	string answer;

	while (i < 3) {
		cout << "[ Здравствуйте, добро пожаловать на викторину! ]\n";
		cout << "                [ Меню ]\n";
		cout << "1: [ Начать игру ]\n";
		cout << "2: [ Настройки ]\n";
		cout << "3: [ Правила ]\n";
		cout << "4: [ Выйти ]\n";
		cin >> menu;

		switch (menu) {
		case 1:
			//1 вопрос
			cout << "[ + ] Игрок: " << name << " | жизни: " << lives << " | очки: " << point << endl;
			cout << "[1] Вопрос: Какой язык программирования является самым популярным для разработки веб-приложений?\n";
			cout << "[ A ] Python        [ B ] С#\n";
			cout << "[ C ] JavaScript        [ D ] C++\n";
			cout << "Выбрать ответ: ";
			cin >> answer;
			if (answer == "C" or answer == "c") {
				cout << "\x1b[92mИдеально!!!!\x1b[0m\n";
				point++;
			}
			else {
				cout << "\x1b[31mНеверно, JavaScript считается самым популярным языком программирования для разработки веб-приложений.\x1b[0m\n";
				lives--;
			}
			//2 вопрос
			cout << "[ + ] Игрок: " << name << " | жизни: " << lives << " | очки: " << point << endl;
			cout << "[1] Вопрос: Что такое IDE и для чего она используется?\n";
			cout << "[ A ] Интегрированная среда разработки, для написания и отладки кода       [ B ] Инструмент для тестирования программ\n";
			cout << "[ C ] Текстовый редактор       [ D ] Компилятор\n";
			cin >> answer;
			if (answer == "A" or answer == "a") {
				cout << "\x1b[92mИдеально!!!!\x1b[0m\n";
				point++;
			}
			else {
				cout << "\x1b[31mНеверно, это программа, которая объединяет все необходимые инструменты для написания, тестирования и отладки кода в одном месте. \x1b[0m\n";
				lives--;
			}
			//3 вопрос
			cout << "[ + ] Игрок: " << name << " | жизни: " << lives << " | очки: " << point << endl;
			cout << "[1] Вопрос: Какая команда используется для вывода текста в консоль в Python?\n";
			cout << "[ A ] print()       [ B ] echo()\n";
			cout << "[ C ] console.log()      [ D ] write()\n";
			cin >> answer;
			if (answer == "A" or answer == "a") {
				cout << "\x1b[92mИдеально!!!!\x1b[0m\n";
				point++;
			}
			else {
				cout << "\x1b[31mНеверно, это программа, которая объединяет все необходимые инструменты для написания, тестирования и отладки кода в одном месте. \x1b[0m\n";
				lives--;

			}
			//4 вопрос
			cout << "[ + ] Игрок: " << name << " | жизни: " << lives << " | очки: " << point << endl;
			cout << "[1] Вопрос: Какой оператор используется для объявления переменной в JavaScript?\n";
			cout << "[ A ] var          [ B ] let\n";
			cout << "[ C ] const        [ D ] all of the above\n";
			cin >> answer;
			if (answer == "D" or answer == "d") {
				cout << "\x1b[92mВерно!\x1b[0m\n";
				point++;
				break;
			}
			else {
				cout << "\x1b[31mНеверно, это программа, которая объединяет все необходимые инструменты для написания, тестирования и отладки кода в одном месте. \x1b[0m\n";
				lives--;
			}
			//5 вопрос
			cout << "[2] Вопрос: Что возвращает метод indexOf(), если элемент не найден в массиве JavaScript?\n";
			cout << "[ A ] null         [ B ] undefined\n";
			cout << "[ C ] false        [ D ] -1\n";
			cin >> answer;
			if (answer == "D" or answer == "d") {
				cout << "\x1b[92mПравильно!\x1b[0m\n";
				point++;
			}
			else {
				cout << "\x1b[31mНеверно, метод indexOf() в JavaScript, если элемент не найден в массиве, возвращает значение -1\x1b[0m\n";
				lives--;
			}
			//6 вопрос
			cout << "[3] Вопрос: Какой тип данных используется для хранения чисел с плавающей точкой в Python?\n";
			cout << "[ A ] float        [ B ] double\n";
			cout << "[ C ] decimal      [ D ] integer\n";
			cin >> answer;
			if (answer == "A" || answer == "a") {
				cout << "\x1b[92mДа, верно!\x1b[0m\n";
				point++;
			}























		case 2:
			cout << "[ Настройки ]\n";
			cout << "1: [ Изменить имя игрока ]\n";
			cout << "2: [ Изменить Количество вопросов в игре ]\n";
			cout << "3: [ Изменить цвет интерфейса ]\n";







			break;
		case 3:
			cout << "Игрок получает очки за правильный ответ на вопрос.\n";
			cout << "Игрок проходит дальше за правильный ответ.\n";
			cout << "Игрок теряет жизнь при неправильном ответе.\n";

			break;
		case 4:
			cout << "Выход...";

			break;



			}



		}
	}

