#include <stdio.h>
// fscanf() �Լ��� ����Ǿ� �ִ� ��� ����(stdio.h)�� �����մϴ�.

// fscanf() �Լ��� ������ ������ �����ϴ�.

// int fscanf(FILE *stream, const char *format[, argument]... );

// format�� scanf() �Լ��� ������ �����մϴ�. 

void main(void)
{
	FILE *fp;
	int i;
	
	fp = fopen("c:\\temp\\file.txt", "r");
	
	if(fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fscanf(fp, "%d", &i);
		// ������ ���� �н��ϴ�. fscanf() �Լ��� scanf() �Լ��� ��� ����� ���� ������ scanf() �Լ�ó�� ����ϸ� �˴ϴ�. 
		printf("i = %d \n", i);
		fclose(fp);
	}
} 
