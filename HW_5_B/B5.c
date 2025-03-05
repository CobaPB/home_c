/*
Сумма цифр
Ввести целое число и найти сумму его цифр.

Формат входных данных
Одно целое число большее или равное нулю.

Формат результата
Одно число - сумма цифр
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t num, sum = 0;
    scanf("%" SCNd32, &num);
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%" PRId32, sum);
    return 0;
}
