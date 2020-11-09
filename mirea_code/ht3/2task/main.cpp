#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s = 0, p = 0, n = 0, r, m, rN;

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай узнаем под какой процент выдана тебе ссуда.\n\n";

    while (key == 'Y' || key == 'y') {
        cout << "Введи S (сумма): ";
        cin >> s;
        if (s <= 0) {
            cout << "Сумма займа не может быть отрицательной или равной 0.\n\n";
            continue;
        }
        cout << "Введи m (платеж): ";
        cin >> m;
        if (m <= 0) {
            cout << "Платеж не может быть отрицательным или равным 0.\n\n";
            continue;
        }
        cout << "Введи n (лет): ";
        cin >> n;
        if (n <= 0) {
            cout << "Время займа не может быть отрицательным или равным 0.\n\n";
            continue;
        }

        p = 0;

        cout << "\nПроцент ссуды величиной " << s << ", которая гасится месячными выплатами величиной " << m << " в течении " << n << " лет составит: " << p << "%." << endl;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}