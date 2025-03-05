/*
Модуль числа
Составить функцию, модуль числа и привести пример ее использования.

Формат входных данных
Целое число

Формат результата
Целое не отрицательное число
*/

#include <stdio.h>
#include <inttypes.h>

int abs(int32_t num)
{
    if (num < 0)
    {
        return -num;
    }
    else
    {
        return num;
    }
}
int main(void)
{
int32_t num;
    scanf("%" SCNd32, &num);
    printf("%"PRId32 ,abs(num));
    return 0;
}
