/*���� 5*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	printf("������� ���������� �������� � ������: ");
	while (scanf_s("%d", &n) == 0)
	{
		printf("�� ����� �� �����. ���������� ��� ���: ");
		rewind(stdin);
	}

	n++;
	char* str;
	str = (char*)calloc(n, sizeof(char));

	printf("������� ������:\n");
	rewind(stdin);
	fgets(str, n, stdin);

	char symb;
	printf("������� ������: ");
	symb=getchar();

	int kl=0;

	for (int i = 0; i < n; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		if (str[i] == symb)
		{
			kl++;
		}
	}

	printf("��������� ������ ��� ����������� %d ���.", kl);


	return 0;
}