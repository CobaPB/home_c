#include <stdio.h>

int main(void){
    int a, b, c, d; //объявляем переменные
    scanf("%d%d%d", &a, &b, &c); //считать 3 числа
    d = a + b + c; //сложить три числа и поместить в d
    printf("%d+%d+%d=%d", a, b, c, d); //вывести на экран сумму 3 чисел

    return 0;
}
