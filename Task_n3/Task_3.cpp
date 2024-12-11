#include <iostream>
#include "../../Hat.h"
#include <ctype.h>
#include <limits>

void my_strcpy(char *dest, const char *src)
{
    while (*src != '\0')
    {
        *dest = *src; // Копируем символ
        dest++;       // Переходим к следующему символу в dest
        src++;        // Переходим к следующему символу в src
    }
    *dest = '\0'; // Добавляем завершающий нуль
}

int my_strcmp(const char *str1, const char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2; // Возвращаем разницу между символами
        }
        str1++;
        str2++;
    }
    return *str1 - *str2; // Если одна строка закончилась раньше
}

void my_strcat(char *dest, const char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }
    if (*(dest - 1) == '\n')
    {
        dest--;
    }
    while (*src != '\0')
    {
        if (*src == '\n')
        {
            src++;
        }
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{

    hat(7);
    std::cout << "Написать функции (копирование, сравнение, объединение) для работы со строками, используя указатели. Стандартных функций работы со строками не использовать\n\n\n";

    while (true)
    {
        int m = 2, n = 2, i = 0, j = 0;
        char *a = new char[100];
        char *b = new char[100];

        std::cout << "Введите строку 1: ";
        do
        {
            a[i] = getchar();
            m++;
            i++;
        } while (a[i - 1] != '\n');

        std::cout << "Введите строку 2: ";
        do
        {
            b[j] = getchar();
            n++;
            j++;
        } while (b[j - 1] != '\n');

        int x;

        std::cout
            << "\n"
            << "Введите 1, чтобы копировать 1 строку в 2;\n"
            << "Введите 2, чтобы сравнить строки;" << '\n'
            << "Введите 3, чтобы объеденить 1 строку со 2:\n";

        x = cinll();

        switch (x)
        {
        case 1:
            my_strcpy(b, a);
            std::cout << "\nРезультирующая строка 1: " << b;
            std::cout << "Результирующая строка 2: " << b << '\n';
            break;
        case 2:
            (my_strcmp(a, b) == 0) ? std::cout << "Строки равны" : std::cout << "Строки не равны";
            break;
        case 3:
            my_strcat(a, b);
            std::cout << "Результирующая объединенная строка: " << a << '\n';
            break;
        default:
            std::cout << "Недопустимый вариант" << "\n";
            break;
        }

        delete[] b;
        delete[] a;

        std::cout
            << "\n\n"
            << "Введите 1, чтобы вновь посчитать значения;\n"
            << "Введите 2, чтобы выйти из программы: " << '\n';

        while (true)
        {
            int a;
            a = cinll();

            std::cout << '\n';

            if (a == 1)
            {
                break;
            }
            if (a == 2)
                exit(0);
            else
                std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n"
                          << '\n';
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}