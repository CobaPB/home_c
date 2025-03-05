/*
Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

Формат входных данных
Одно целое положительное число N

Формат результата
Целое число - сумма чисел от 1 до N
*/

#include <stdio.h>
#include <inttypes.h>

int sum(int32_t a)
{
    return  a * (a + 1)/2;
}

int main(void)
{
    int32_t numA;
    scanf("%" SCNd32, &numA);
    printf("%"PRId32 "\n", sum(numA));
    return 0;
}
