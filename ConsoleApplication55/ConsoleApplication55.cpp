#include <iostream>
using namespace std;

int main() {
    int width, height;
    char symbol;

    cout << "Введіть ширину: ";
    cin >> width;

    cout << "Введіть висоту: ";
    cin >> height;

    cout << "Введіть символ: ";
    cin >> symbol;

    if (width <= 0 || height <= 0) {
        cout << "Некоректні розміри!";
        return 0;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int width, height, color;
    char symbol;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    cout << "Введіть ширину: ";
    cin >> width;

    cout << "Введіть висоту: ";
    cin >> height;

    cout << "Введіть символ: ";
    cin >> symbol;

    cout << "Колір (1-15): ";
    cin >> color;

    if (width < 2 || height < 2 || color < 1 || color > 15) {
        cout << "Некоректні дані!";
        return 0;
    }

    SetConsoleTextAttribute(h, color);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 ||
                j == 0 || j == width - 1)
                cout << symbol;
            else
                cout << " ";
        }
        cout << endl;
    }

    SetConsoleTextAttribute(h, 7);

    return 0;
}