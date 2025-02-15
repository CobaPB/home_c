/*
Above, less, equal
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.

Формат входных данных
Два целых числа

Формат результата
Одно единственное слово: Above, Less, Equal
*/

#include <stdio.h>
#include <inttypes.h>

int main(void){
    int32_t a, b;
    scanf("%" SCNd32 "%" SCNd32, &a, &b);

    if ( a > b){
        printf("Above");
    }
    else if (a < b){
        printf("Less");
    }
    else if ( a == b){
        printf("Equal");
    }
    else
        return 0;
}
