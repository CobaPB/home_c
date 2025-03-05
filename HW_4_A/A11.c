/*
Сумма максимума и минимума
Напечатать сумму максимума и минимума.

Формат входных данных
Пять целых чисел через пробел

Формат результата
Одно целое число - сумма максимума и минимума
*/
/*
нам надо найти максимальное значение и наименьшее и их сложить
мы попрорядку в условии сравниваем каждое число с каждым на больше или равно(для наибольшего числа)
и меньше или равно (для наименшего числа)
и присваевыем значение переменной min и max
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t a, b, c, d, e, min, max;
    scanf("%" SCNd32 "%" SCNd32 "%" SCNd32 "%" SCNd32 "%" SCNd32, &a, &b, &c, &d, &e);
    //max
    if (a >= b && a >= c && a >= d && a >= e){
        max = a;
    }
    else if (b >= a && b >= c && b >= d && b >= e){
        max = b;
    }
    else if (c >= a && c >= b && c >= d && c >= e){
        max = c;
    }
    else if (d >= a && d >= b && d >= c && d >= e){
        max = d;
    }
    else {
        max = e;
    }
    //min
    if (a <= b && a <= c && a <= d && a <= e){
        min = a;
    }
    else if (b <= a && b <= c && b <= d && b <= e){
        min = b;
    }
    else if (c <= a && c <= b && c <= d && c <= e){
       min = c;
    }
    else if (d <= a && d <= b && d <= c && d <= e){
        min = d;
    }
    else {
        min = e;
    }

printf("%" PRId32, min+max);
}
