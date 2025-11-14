#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int language, num;

    cout << "[ + ] Переводчик\n";
    cout << endl;
    cout << "[ 1 ] Русские слова\n" << "[ 2 ] Английские слова\n\n";
    cout << "[ 3 ] Выйти\n";
    cin >> language;
    switch (language) {
    case 1: {
        cout << "[ + ] Переводчик “Список русских слов\n";
        cout << "[ 1 ] рука\n";
        cout << "[ 2 ] чёрный\n";
        cout << "[ 3 ] общий\n";
        cout << "[ 4 ] вешать\n";
        cout << "[ 5 ] консультант\n";
        cout << "[ 6 ] превосходно\n";
        cout << "[ 7 ] внушение\n";
        cout << "[ 8 ] выполаскивать\n";
        cout << "[ 9 ] сдавленный\n";
        cout << "[ 10 ] гриб\n";
        cout << "[ 11 ] Грелка\n";
        cout << "[ 12 ] Палуба\n";
        cout << "[ 13 ] палка\n";
        cout << "[ 14 ] ручка\n";
        cout << "[ 15 ] конус\n";
        cout << "[3] Выберите номер слова : ";
        cin >> num;
        switch (num) {
        case 1: {
            cout << "[ + ] Перевод: рука -> hand";
            return 0;
        }
        case 2: {
            cout << "[ + ] Перевод: чёрный -> black";
            return 0;
        }
        case 3: {
            cout << "[ + ] Перевод: общий -> common";
            return 0;
        }
        case 4: {
            cout << "[ + ] Перевод: вешать -> hang";
            return 0;
        }
        case 5: {
            cout << "[ + ] Перевод: консультант -> consultant";
            return 0;
        }
        case 6: {
            cout << "[ + ] Перевод: превосходно -> excellent";
            return 0;
        }
        case 7: {
            cout << "[ + ] Перевод: внушение -> suggestion";
            return 0;
        }
        case 8: {
            cout << "[ + ] Перевод: выполаскивать -> rinse";
            return 0;
        }
        case 9: {
            cout << "[ + ] Перевод: сдавленный -> squeezed";
            return 0;
        }
        case 10: {
            cout << "[ + ] Перевод: гриб -> mushroom";
            return 0;
        }
        case 11: {
            cout << "[ + ] Перевод: Грелка ->  Hot water bottle";
            return 0;
        }
        case 12: {
            cout << "[ + ] Перевод: Палуба -> Deck";
            return 0;
        }
        case 13: {
            cout << "[ + ] Перевод: палка -> stick";
            return 0;
        }
        case 14: {
            cout << "[ + ] Перевод: ручка -> handle";
            return 0;
        }
        case 15: {
            cout << "[ + ] Перевод: конус -> cone";
            return 0;
        }

        }
    }
    case 2: {
        cout << "[ + ] Переводчик “Список англиских слов\n";
        cout << "[ 1 ] apple\n";
        cout << "[ 2 ] book\n";
        cout << "[ 3 ] cat\n";
        cout << "[ 4 ] dog\n";
        cout << "[ 5 ] house\n";
        cout << "[ 6 ] tree\n";
        cout << "[ 7 ] car\n";
        cout << "[ 8 ] flower\n";
        cout << "[ 9 ] sun\n";
        cout << "[ 10 ] moon\n";
        cout << "[ 11 ] water\n";
        cout << "[ 12 ] fire\n";
        cout << "[ 13 ] bread\n";
        cout << "[ 14 ] milk\n";
        cout << "[ 15 ] coffee\n";
        cout << "[3] Выберите номер слова : ";
        cin >> num;
        switch (num) {
        case 1: {
            cout << "[ + ] Перевод: apple -> яблоко";
            return 0;
        }
        case 2: {
            cout << "[ + ] Перевод: book -> книга";
            return 0;
        }
        case 3: {
            cout << "[ + ] Перевод: cat -> кот";
            return 0;
        }
        case 4: {
            cout << "[ + ] Перевод: dog -> собака";
            return 0;
        }
        case 5: {
            cout << "[ + ] Перевод: house -> дом";
            return 0;
        }
        case 6: {
            cout << "[ + ] Перевод: tree -> дерево";
            return 0;
        }
        case 7: {
            cout << "[ + ] Перевод: car -> машина";
            return 0;
        }
        case 8: {
            cout << "[ + ] Перевод: flower -> цветок";
            return 0;
        }
        case 9: {
            cout << "[ + ] Перевод: sun -> солнце";
            return 0;
        }
        case 10: {
            cout << "[ + ] Перевод: moon -> луна";
            return 0;
        }
        case 11: {
            cout << "[ + ] Перевод: water ->  вода";
            return 0;
        }
        case 12: {
            cout << "[ + ] Перевод: fire -> огонь";
            return 0;
        }
        case 13: {
            cout << "[ + ] Перевод: bread -> хлеб";
            return 0;
        }
        case 14: {
            cout << "[ + ] Перевод: milk -> молоко";
            return 0;
        }
        case 15: {
            cout << "[ + ] Перевод: coffee -> коффе";
            return 0;
        }
        }
    }
          return 0;

    }














































}
    