#include<stdio.h>

#define SIZE 4

int main(void)
{
	int some_data[SIZE] = { 1492, 1066 }; //部分初始化数组
	int i;
	
	printf("%2s%14s\n",		"i", "some_data[i]");
	i = 0;
	while(i < SIZE)//for(i = 0; i < SIZE; i++);
	{
		printf("%2d%14d\n", i, some_data[i]);
		i = i+1;
	}
	
	return 0;
}
