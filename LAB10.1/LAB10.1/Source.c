#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int kl_slov(char* str, int m);

int amount_AA_words(char* str, int m);

int main()
{
    setlocale(LC_ALL, "rus");

    char* str;
    int m, kl = 0;


    printf("������� ���������� �������� � ������: ");
    while (scanf_s("%d", &m) == 0)
    {
        printf("�� ����� �� �����. ���������� ��� ���:"); //�������� �� ������������ ����� � ����
        rewind(stdin);
    }

    str = (char*)calloc(m + 1, sizeof(char));

    printf("������� ������ ������� �� ����� %3d ��������:\n", m);

    rewind(stdin);
    fgets(str, m, stdin);


    kl_slov(str, m);
    amount_AA_words(str, m);


    return 0;
}




int amount_AA_words(char* str, int m)
{
    int AA = 0, a = 1, b = 0;

    for (int i = 0; i < m; i++)
    {
        if (str[i] >= 33 && str[i] <= 126 && (!(str[i - 1] >= 33 && str[i - 1] <= 126 || (i == 1))))
        {
            a = str[i];
        }

        if ((str[i] >= 33 && str[i] <= 126) && !(str[i + 1] >= 33 && str[i + 1] <= 126) || str[i + 1] == '\n')
        {
            b = str[i];
        }

        if (a == b)
        {
            AA++;
            a = 1;
            b = 0;
        }
    }


    printf("���������� ����, � ������� ������ � ��������� ������� ���������: %d", AA);
    return AA;
}

int kl_slov(char* str, int m)
{
    unsigned int a, i;
    a = 0;
    for (i = 0; i < m; i++)
    {
        if ((str[i] == ' ') && (str[i + 1] != ' '))
        {
            a = a + 1;
        }
    }
    if (str[0] != ' ')
        a = a + 1;
    printf("� ������: %d ����.\n", a);
    return a;
}