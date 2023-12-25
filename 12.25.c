#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int arr[1000] = { 0 }, a = 0, b = 0, c = 0;
    int* arr1 = (int*)malloc((digitsSize + 1) * sizeof(int));
    for (a = 0; a < digitsSize; a++)
    {
        arr[a] = digits[digitsSize - 1 - a];
    }
    a = 0;
    arr[0] += 1;
    while (arr[a] > 9)
    {
        arr[a] = 0;
        arr[a + 1] = arr[a + 1] + 1;
        a++;
    }
    if (a == digitsSize)
    {
        *returnSize += 1;
        arr1[0] = 1;
        while (b < digitsSize)
        {
            arr1[b + 1] = arr[digitsSize - b];
            b++;
        }
    }
    else {
        while (b < digitsSize)
        {
            arr1[b] = arr[digitsSize - 1 - b];
            b++;
        }
    }
    int* p = arr1;
    free(arr1);
    return p;
}
int main()
{
    int arr[4] = { 1,2,3,4 };
    plusOne(arr, 4, 4);
	return 0;
}
//char* addBinary(char* a, char* b) {
//    char p[32] = "", ptr[32] = "";
//    char n[32] = "", m[32] = "";
//    //char* p=(char*)malloc(32*sizeof(char)), * n = (char*)malloc(32 * sizeof(char)), * m = (char*)malloc(32 * sizeof(char)), * ptr = (char*)malloc(32 * sizeof(char));
//    int c = 0, d = 0;
//    for (c = 0; c < strlen(a); c++)
//    {
//        n[c] = a[strlen(a) - c - 1];
//    }
//    for (c = 0; c < strlen(b); c++)
//    {
//        m[c] = b[strlen(b) - c - 1];
//    }
//    c = 0;
//    while (n[c] && m[c])
//    {
//        if (n[c] + m[c] + d - 2 * '0' == 2)
//        {
//            d = 1;
//            p[c] = '0';
//        }
//        else if (n[c] + m[c] + d - 2 * '0' == 0)
//        {
//            d = 0;
//            p[c] = '0';
//        }
//        else if (n[c] + m[c] + d - 2 * '0' == 3) {
//            p[c] = '1';
//            d = 1;
//        }
//        else {
//            p[c] = '1';
//            d = 0;
//        }
//        c++;
//    }
//    while (n[c])
//    {
//        if (n[c] + d - '0' == 2)
//        {
//            p[c] = '0';
//            d = 1;
//        }
//        else if (n[c] + d - '0' == 1)
//        {
//            p[c] = '1';
//            d = 0;
//        }
//        else if (n[c] + d - '0' == 0)
//        {
//            p[c] = '0';
//            d = 0;
//        }
//        c++;
//    }
//    while (m[c])
//    {
//        if (m[c] + d - '0' == 2)
//        {
//            p[c] = '0';
//            d = 1;
//        }
//        else if (m[c] + d - '0' == 1)
//        {
//            p[c] = '1';
//            d = 0;
//        }
//        else if (m[c] + d - '0' == 0)
//        {
//            p[c] = '0';
//            d = 0;
//        }
//        c++;
//    }
//    for (c = 0; c < strlen(p); c++)
//    {
//        ptr[c] = p[strlen(p) - 1 - c];
//    }
//    return ptr;
//}
//bool isPalindrome(char* s) {
//    int a = 0, b = strlen(s) - 1;
//    while (a != b) {
//        while (!isalpha(s[a]) && !isdigit(s[a]))
//        {
//            a++;
//            if (a == b)
//                return true;
//        }
//        while (!isalpha(s[b]) && !isdigit(s[b]))
//        {
//            b--;
//            if (a == b)
//                return true;
//        }
//        if (s[a] != s[b] && toupper(s[a]) != s[b] && tolower(s[a]) != s[b])
//            return false;
//        if (a + 1 == b || a == b)
//            return true;
//        a++;
//        b--;
//    }
//    return true;
//}