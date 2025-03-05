/*
Возвести в степень
Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.

Формат входных данных
Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0

Формат результата
Одно целое число
*/

#include <stdio.h>
#include <inttypes.h>

int power(int32_t n, int32_t p)
{
int32_t res = 1;
    for (int32_t i = 1; i <= p; i++)
    res *= n;
    return res;
}
int main(void)
{
int32_t x, y;
    scanf("%" SCNd32 "%" SCNd32, &x, &y);
    printf("%"PRId32, power(x, y));
    return 0;
}
