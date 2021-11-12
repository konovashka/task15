// Поиск элемента равного заданному 
#include <iostream>

int main()
{
	const int n=5;
	int a[n];
	int c,fl,numb;
	fl = 0;
	scanf_s("%d", &c);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; ((i < n) && (fl==0)); i++)
	{
		if (a[i] == c)
		{
			fl = 0;
			numb = i+1;
		}
	}
	printf("%d", numb);
}