/*
Наибольшее из двух чисел
Ввести два числа и вывести их в порядке возрастания.

Формат входных данных
Два целых числа

Формат результата
Два целых числа
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t a, b;
    scanf("%" SCNd32 "%" SCNd32, &a, &b); // SCN надо указывать для двух переменных
    if (a > b)
        printf("%" PRId32 " %" PRId32, b, a); // PRI SCN надо указывать для двух переменных
    else
        printf("%" PRId32 " %" PRId32, a, b);

    return 0;
}
