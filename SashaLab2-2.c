#include <stdio.h>

int main()
{
	int s1, s2, buf, ost=0;
	printf("Input first number: ");
	scanf_s("%d", &s1);
	printf("Input second number: ");
	scanf_s("%d", &s2);

	if (s1 <= s2)
	{
		ost = 0;
		printf("Remainder is %d", ost);
	}
	if (s1 > s2)
	{
		buf = s2;
		while (s1 > buf)
		{
			buf += s2;
		}
		ost = buf - s1;
		printf("Remainder is %d", ost);
	}
	//if(s2>s1)
	//{
	//	buf = s1;
	//	while (s2 > buf)
	//	{
	//		buf += s1;
	//	}
	//	ost = buf - s2;
	//	printf("Remainder is %d", ost);
	//}

	return 0;
}
