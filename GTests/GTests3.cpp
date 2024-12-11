#include <gtest/gtest.h>
#include <cstring>
#include <iostream>
#include <cctype>

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

TEST(Task3, Test1)
{
    char a[20] = "qwerty";
    char b[20] = "uiop";
    bool eq1;

    my_strcpy(b, a);
    eq1 = (strcmp(b, a) == 0);

    ASSERT_TRUE(eq1);
}

TEST(Task3, Test2)
{
    char a[20] = "qwerty";
    char b[20] = "qwerty";
    bool eq2;

    eq2 = (my_strcmp(a, b) == 0);

    ASSERT_TRUE(eq2);
}

TEST(Task3, Test3)
{
    char a[40] = "qwerty";
    char b[20] = "uiop";
    char res3[40] = "qwertyuiop";
    bool eq3;

    my_strcat(a, b);
    eq3 = (strcmp(a, res3) == 0);

    ASSERT_TRUE(eq3);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
