#include <stdio.h>
#include <locale.h>

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    int a, b, c;

    printf("����� A:");
    scanf_s("%d", &a);

    printf("����� B:");
    scanf_s("%d", &b);

    printf("����� C:");
    scanf_s("%d", &c);

    if (abs(a - b) < abs(a - c))
    {
        printf("����� B �����\n");
    }
    else printf("����� C �����\n");

    return 0; //������� �������������� �������� ����� ����������� �������
}