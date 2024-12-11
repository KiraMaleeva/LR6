#include <iostream>
#include <ctype.h>
#include <limits>
#include "../../Hat.h"

bool findFloat(const char *a, int &l, int &r, int &k)
{
    for (int i = 0; i < 100; i++)
    {
        if (a[i] == '.' && isdigit(a[i - 1]) && isdigit(a[i + 1]))
        {
            k = i;
            l = 0;
            r = 0;
            for (int j = i - 1; j >= 0 && isdigit(a[j]); j--)
            {
                l++;
            }
            for (int j = i + 1; j < 100 && isdigit(a[j]); j++)
            {
                r++;
            }
            return true;
        }
    }
    return false;
}

void fillArray(const char *a, char *b, int l, int r, int k)
{
    for (int i = 0; i < l + r + 1; i++)
    {
        b[i] = a[k - l + i];
    }
    b[l + r + 1] = '\0';
}

int main()
{
    while (true)
    {
        hat(7);
        std::cout << "Из строки, состоящей из букв, цифр, запятых, точек, знаков + (плюс) и – (минус), выделить подстроку, задающую вещественное число с фиксированной точкой.\n\n\n";

        char *a = new char[100];
        int i = 0, l = 0, r = 0, k = 0;
        std::cout << "Введите строку: ";
        do
        {
            a[i] = getchar();
            i++;
        } while (a[i - 1] != '\n');

        if (findFloat(a, l, r, k))
        {
            char *b = new char[100];
            fillArray(a, b, l, r, k);
            std::cout << "Результат: " << b << "\n";
            delete[] b;
        }
        else
        {
            std::cout << "Не удалось найти корректное число в строке.\n";
        }
        delete[] a;

        std::cout << "\n\nВведите 1, чтобы вновь посчитать значения;\nВведите 2, чтобы выйти из программы: \n";

        while (true)
        {
            int a;
            std::cin >> a;

            std::cout << '\n';

            if (a == 1)
            {
                break;
            }
            if (a == 2)
            {
                exit(0);
            }
            else
            {
                std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n\n";
            }
        }
        std::cin.clear();                                                   // Очистить ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистить буфер ввода
    }

    return 0;
}