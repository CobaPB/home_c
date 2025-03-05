/*
Квадраты чисел
Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.

Формат входных данных
Два целых числа по модулю не больше 100

Формат результата
Квадраты чисел от a до b.
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t a, b;
    scanf("%" SCNd32 "%" SCNd32, &a, &b);
    {
        for (int32_t i = a; i <= b; i++)
            printf(" %" PRId32, i*i);
        return 0;
    }
}
