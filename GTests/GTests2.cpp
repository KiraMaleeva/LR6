#include <gtest/gtest.h>
#include <cstring>
#include <iostream>
#include <cctype>

void calc(const char *a, char *b, int &n, int &j)
{
    for (int i = 0; i < 100 && a[i] != '\0'; i++)
    {
        if (a[i] != ' ' && isalpha(a[i]))
        {
            b[j] = a[i];
            n++;
            j++;
        }
    }
    b[j] = '\0';
}

TEST(Task1, Test1)
{
    const char *a = "1q2w3e4r5t6y", *res = "qwerty";
    char b[50];
    int n = 0, i = 0, j = 0;
    bool eq;

    calc(a, b, n, j);
    eq = (strcmp(b, res) == 0);

    ASSERT_TRUE(eq);
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}