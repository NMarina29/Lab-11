#include <stdio.h>
#include <locale.h>

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    int a, b, c;

    printf("Точка A:");
    scanf_s("%d", &a);

    printf("Точка B:");
    scanf_s("%d", &b);

    printf("Точка C:");
    scanf_s("%d", &c);

    if (abs(a - b) < abs(a - c))
    {
        printf("Точка B ближе\n");
    }
    else printf("Точка C ближе\n");

    return 0; //Возврат целочисленного значения перед завершением функции
}