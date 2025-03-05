/*
Сумма чисел от 1 до N
Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N

Формат входных данных
Одно натуральное число

Формат результата
Сумма чисел от 1 до введенного числа
*/

#include <stdio.h>

int print_num(int n)
{
    if (n > 1)
    {
        n = print_num(n - 1) + n;
    }
    return n;
}
int main(void)
{
int n;
    scanf("%d", &n);
    printf("%d\n", print_num(n));
    return 0;
}
