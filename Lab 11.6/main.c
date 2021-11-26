#include <stdio.h>
#include <locale.h>

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    int x;

    printf("Число: ");
    scanf_s("%i", &x);

    if ((x % 2) == 0)
    {
        printf("Чётное ");
    }
    else
    {
        printf("Нечётное ");
    }
    if (x > 99)
    {
        printf("трёхзначное ");
    }
    else if ((99 >= x) & (x > 9))
    {
        printf("двузначное ");
    }
    else if (x <= 9)
    {
        printf("однозначное ");
    }
    
    printf("число");

    return 0; //Возврат целочисленного значения перед завершением функции
}