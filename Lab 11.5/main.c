#include <stdio.h>
#include <locale.h>

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    int x;

    printf("�����: ");
    scanf_s("%i", &x);

    if (x == 0) 
    { 
        printf("�������");
    }
    else 
    {
        if (x > 0)
        {
            printf("������������� ");
        }  
        else
        {
            printf("������������� ");
        }
        if ((x % 2) == 0)
        {
            printf("������ ");
        }
        else
        {
            printf("�������� ");
        }
    }
    printf("�����");

    return 0; //������� �������������� �������� ����� ����������� �������
}