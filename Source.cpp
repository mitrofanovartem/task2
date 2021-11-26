#include <math.h>
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    char answer = '1';
    do {
        int  x1, x2, x3, x4, y1, y2, y3, y4;

        cout << "Введите x1, y1: ";
        cin >> x1 >> y1;

        cout << "Введите x2, y2: ";
        cin >> x2 >> y2;

        cout << "Введите x3, y3: ";
        cin >> x3 >> y3;

        if (x1 == x2) {
            x4 = x3;
        }
        else if (x1 == x3) {
            x4 = x2;
        }
        else {
            x4 = x1;
        }

        if (y1 == y2) {
            y4 = y3;
        }
        else if (y1 == y3) {
            y4 = y2;
        }
        else {
            y4 = y1;
        }

        cout << "Искомая координата x = " << x4 << " Искомая координата y = " << y4 << endl;

        cout << "Повторить вычисления?(1-да 0-нет): "; cin >> answer;

    } while (answer != '0');

    system("pause");

    return 0;
}



