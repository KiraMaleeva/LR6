#include <gtest/gtest.h>
#include <cstring>
#include <iostream>
#include <cctype>

bool findFloat(const char *a, int &l, int &r, int &k)
{
    for (int i = 0; i < strlen(a); i++)
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
            for (int j = i + 1; j < strlen(a) && isdigit(a[j]); j++)
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

TEST(Task1, Test1)
{
    const char *a = "qwert123.0123yuiop", *res = "123.0123";
    int l = 0, r = 0, k = 0;
    bool eq;

    if (findFloat(a, l, r, k))
    {
        char b[100];
        fillArray(a, b, l, r, k);
        eq = (strcmp(b, res) == 0);
    }
    else
    {
        eq = false;
    }

    ASSERT_TRUE(eq);
}

int main()
{
    testing::InitGoogleTest();    
    return RUN_ALL_TESTS();
}