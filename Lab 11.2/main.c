#include <stdio.h>
#include <locale.h>


int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    int a, b, c;

    printf("������� ����� �: "); //����� ���������
    scanf_s("%d", &a); //���������� ��������� ��������

    printf("������� ����� B: ");
    scanf_s("%d", &b);

    printf("������� ����� C: ");
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

    return 0; //������� �������������� �������� ����� ����������� �������
}