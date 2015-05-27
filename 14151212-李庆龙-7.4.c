# include<stdio.h>
void transfer(int list[][3]);
void change(int *p1, int *p2);
int main()
{
	int list[3][3];
	int i, j;
	printf("input all the data:\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			scanf_s("%d", &list[i][j]);
		}
	}
	transfer(list);
	printf("\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%3d", list[i][j]);
		}
		printf("\n");
	}
	system("pause");
}
void transfer(int list)
{
	int i, j;
	int(*p)[3] = list;
	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)
		{
			if (i != j)
			{
				change(*(p + i) + j, *(p + j) + i);
			}
		}
	}
}
void change(int *p1, int *p2)
{
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}
