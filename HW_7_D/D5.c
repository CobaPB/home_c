/*
В двоичную систему
Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.

Формат входных данных
Целое не отрицательное число в десятичной системе счисления

Формат результата
Целое число в двоичной системе счисления
*/

#include <stdio.h>

void get_bin(int n)
{
    if (n > 1)
        get_bin(n / 2);
    printf("%d", n % 2);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    get_bin(n);
    return 0;
}
