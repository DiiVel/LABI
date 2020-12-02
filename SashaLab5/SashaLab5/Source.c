/*лаба 5*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	printf("Введите количество символов в строке: ");
	while (scanf_s("%d", &n) == 0)
	{
		printf("Вы ввели не число. Попробуйте еще раз: ");
		rewind(stdin);
	}

	n++;
	char* str;
	str = (char*)calloc(n, sizeof(char));

	printf("Введите строку:\n");
	rewind(stdin);
	fgets(str, n, stdin);

	char symb;
	printf("Введите символ: ");
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

	printf("Введенный символ был использован %d раз.", kl);


	return 0;
}