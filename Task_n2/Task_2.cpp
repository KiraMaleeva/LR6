#include <iostream>
#include "../../Hat.h"
#include <ctype.h>
#include <limits>

void calc(const char *a, char *b, int& n, int& j) {
    for (int i = 0; i < 100 && a[i] != '\n'; i++) {
        if (a[i] == ' ' || isalpha(a[i])) {
            b[j] = a[i];
            n++;
            j++;
        }
    }
    b[j] = '\0';
}

int main() {

    hat(7);
    std::cout << "Из текста удалить все символы, не являющиеся буквами, кроме пробелов.\n\n\n";

    while (true) {
        int m = 100, n = 0, i = 0, j = 0;
        char *a = new char[m];
        char *b = new char[m];
        std::cout << "Введите строку: ";
        do {
            a[i] = getchar();
            i++;
        } while (a[i - 1] != '\n');

        calc(a, b, n, j);
        
        std::cout << "Результат: " << b << "\n";
        
        delete[] a;
        delete[] b;

        std::cout << "\n\nВведите 1, чтобы вновь посчитать значения;\nВведите 2, чтобы выйти из программы: \n";

        while (true) {
            int a;
            std::cin >> a;

            std::cout << '\n';

            if (a == 1) {
                break;
            }
            if (a == 2) {
                exit(0);
            } else {
                std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n\n";
            }
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
