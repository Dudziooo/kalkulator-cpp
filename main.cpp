#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operacja;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Podaj operacje (+, -, *, /): ";
    cin >> operacja;

    switch (operacja) {
        case '+':
            cout << "Wynik: " << a + b << endl;
            break;
        case '-':
            cout << "Wynik: " << a - b << endl;
            break;
        case '*':
            cout << "Wynik: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Blad: dzielenie przez zero!" << endl;
            } else {
                cout << "Wynik: " << a / b << endl;
            }
            break;
        default:
            cout << "Nieznana operacja!" << endl;
    }

    return 0;
}