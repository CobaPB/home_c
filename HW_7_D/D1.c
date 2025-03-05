/*
От 1 до N
Составить рекурсивную функцию, печать всех чисел от 1 до N

Формат входных данных
Одно натуральное число

Формат результата
Последовательность чисел от 1 до введенного числа
*/

#include <stdio.h>

void print_num(int n)
{
    if (n > 1)
        print_num(n - 1);
    printf("%d ", n);
}
int main(void)
{
int n;
    scanf("%d", &n);
    print_num(n);
    return 0;
}
