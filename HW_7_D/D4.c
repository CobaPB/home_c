/*
В прямом порядке
Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
void print_num(int num)

Формат входных данных
Одно целое неотрицательное число

Формат результата
Все цифры числа через пробел в прямом порядке.
*/

#include <stdio.h>
void print_num(int num)
{
    if ( num > 0 )
    {
        print_num(num / 10) ;
        printf("%d ", num % 10);
    }
    return;
}
int main(void)
{
    int num1;
    scanf("%d", &num1);
    if (num1 > 0)
        print_num(num1);
    else
        printf("%d\n",num1);
    printf("\n");
    return 0;
}
