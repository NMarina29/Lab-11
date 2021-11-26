#include <stdio.h>
#include <locale.h>


int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    int a, b, c;

    printf("Введите число А: "); //вывод сообщения
    scanf_s("%d", &a); //сохранение введенных значений

    printf("Введите число B: ");
    scanf_s("%d", &b);

    printf("Введите число C: ");
    scanf_s("%d", &c);

    if ((a >= b) & (a >= c)) 
    {
        if (b >= c) 
        {
            printf("%d\n", a + b);
        }
        else printf("%d\n", a + c);
    }
    else if ((b >= a) & (b >= c))
        if (a >= c) {
            printf("%d\n", a + b);
        }
        else printf("%d\n", b + c);
    else
        if (a >= b) {
            printf("%d\n", a + c);
        }
        else printf("%d\n", b + c);

    return 0; //Возврат целочисленного значения перед завершением функции
}