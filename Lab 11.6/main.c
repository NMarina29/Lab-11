#include <stdio.h>
#include <locale.h>

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    int x;

    printf("�����: ");
    scanf_s("%i", &x);

    if ((x % 2) == 0)
    {
        printf("׸���� ");
    }
    else
    {
        printf("�������� ");
    }
    if (x > 99)
    {
        printf("���������� ");
    }
    else if ((99 >= x) & (x > 9))
    {
        printf("���������� ");
    }
    else if (x <= 9)
    {
        printf("����������� ");
    }
    
    printf("�����");

    return 0; //������� �������������� �������� ����� ����������� �������
}