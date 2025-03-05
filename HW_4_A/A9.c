/*
Наибольшее из пяти чисел
Ввести пять чисел и найти наибольшее из них.

Формат входных данных
Пять целых чисел разделенных пробелом

Формат результата
Одно целое число
*/

/*
по сути сравниваем каждое с каждым число на наибольшее число
*/
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t a, b, c, d, e;
    scanf("%" SCNd32 "%" SCNd32 "%" SCNd32 "%" SCNd32 "%" SCNd32, &a, &b, &c, &d, &e);
    if (a >= b && a >= c && a >= d && a >= e){
        printf("%" PRId32, a);
    }
    else if (b >= a && b >= c && b >= d && b >= e){
        printf("%" PRId32, b);
    }
    else if (c >= a && c >= b && c >= d && c >= e){
        printf("%" PRId32, c);
    }
    else if (d >= a && d >= b && d >= c && d >= e){
        printf("%" PRId32, d);
    }
    else {
        printf("%" PRId32, e);
    }

    return 0;
}
