/*
Какое время года
Ввести номер месяца и вывести название времени года.

Формат входных данных
Целое число от 1 до 12 - номер месяца.

Формат результата
Время года на английском: winter, spring, summer, autumn
*/
/*
мы берем определяем значение месяца времени года и начинаем
сравнивать с цифрами по месяцам
*/
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t month;
    scanf("%" SCNd32, &month);
    if (month == 12 || month == 1 || month == 2){
        printf("winter");
    }
    else if (month >= 3 && month <= 5){
        printf("spring");
    }
    else if (month >= 6 && month <= 8){
        printf("summer");
    }
    else if (month >= 9 && month <=11){
        printf("autumn");
    }
    else
        return 0;
}
