/*
Среднее арифметическое чисел
Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров). int middle(int a, int b)

Формат входных данных
Два целых не отрицательных числа

Формат результата
Одно целое число
*/

#include <stdio.h>
#include <inttypes.h>

int middle(int32_t a, int32_t b)
{
    return (a + b) / 2;
}

int main(void)
{
    int32_t numA, numB;
    scanf("%"SCNd32 "%" SCNd32, &numA, &numB);
    printf("%" PRId32 "\n", middle(numA, numB));
    return 0;
}
