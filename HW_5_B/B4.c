/*
Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Формат входных данных
Целое положительное число

Формат результата
Одно слов: YES или NO
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t n;
    scanf("%" SCNd32, &n);
    if (n >= 100 && n <=999)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
