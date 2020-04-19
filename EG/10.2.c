#include<stdio.h>

#define SIZE 4

int main(void)
{
	int no_data[SIZE]; //δ��ʼ������
	int i;
	
	printf("%2s%14s\n",		"i", "no_data[i]");
	i = 0;
	while(i<SIZE)//for(i = 0; i < SIZE; i++);
	{
		printf("%2d%14d\n", i, no_data[i]);
		i = i+1;
	}

	getchar();
	
	return 0;
}
