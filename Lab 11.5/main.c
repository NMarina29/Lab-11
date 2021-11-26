#include <stdio.h>
#include <locale.h>

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    int x;

    printf("Число: ");
    scanf_s("%i", &x);

    if (x == 0) 
    { 
        printf("Нулевое");
    }
    else 
    {
        if (x > 0)
        {
            printf("Положительное ");
        }  
        else
        {
            printf("Отрицательное ");
        }
        if ((x % 2) == 0)
        {
            printf("чётное ");
        }
        else
        {
            printf("нечётное ");
        }
    }
    printf("число");

    return 0; //Возврат целочисленного значения перед завершением функции
}