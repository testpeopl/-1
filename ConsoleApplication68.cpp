#include <iostream>
using namespace std;
int main()
{

    int ramzam;
    char pididi;
    cin >> ramzam;
    cin >> pididi;
    for (int i = 0; i < ramzam; i++) { //горизонталь
        for (int j = 0; j < ramzam; j++) { //вертикаль
            if (i == 0 || i == ramzam - 1 || j == 0 || j == ramzam - 1) {
                cout << pididi << " ";
            }
            else if (j == ramzam /2 || i == ramzam /2){
                cout << pididi << " ";
            }
            else if (j >= ramzam /2 && i >= ramzam /2){
                cout <<  "\x1b[91m#\x1b[0m"<< " ";
            }
            else if (j <= ramzam / 2 && i >= ramzam / 2) {
                cout << "\x1b[93m#\x1b[0m" << " ";
            }
            else if (j >= ramzam / 2 && i <= ramzam / 2) {
                cout << "\x1b[92m#\x1b[0m" << " ";
            }
            else if (j <= ramzam / 2 && i <= ramzam / 2) {
                cout << "\x1b[94m#\x1b[0m" << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}