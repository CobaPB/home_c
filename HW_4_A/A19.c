/*
Существует ли треугольник
Даны стороны треугольника a, b, c. Определить существует ли такой треугольник.

Формат входных данных
Три целых числа. Стороны треугольника a, b, c.

Формат результата
YES или NO
*/
/*
У треугольника сумма любых двух сторон должна быть больше третьей.
Иначе две стороны просто "лягут" на третью и треугольника не получится.

Пользователь вводит длины трех сторон. Программа должна определять,
может ли существовать треугольник при таких длинах.
Это значит, необходимо сравнить суммы всех пар сторон с оставшейся третьей стороной.

Поскольку всего три стороны, то можно составить три варианта сложения двух сторон: a + b, b + c, a + c.
Первую сумму сравниваем с оставшейся стороной c, вторую - с a и третью - с b.
Если хотя бы в одном случае сумма окажется не больше третьей стороны, то делается вывод, что треугольник не существует.
*/

#include <stdio.h>
#include <inttypes.h>

int main(void){
    int32_t a, b, c;
    scanf("%" SCNd32 "%" SCNd32 "%" SCNd32, &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a){
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}

