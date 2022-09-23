#include <stdio.h>
// fscanf() 함수가 선언되어 있는 헤더 파일(stdio.h)을 포함합니다.

// fscanf() 함수의 원형은 다음과 같습니다.

// int fscanf(FILE *stream, const char *format[, argument]... );

// format은 scanf() 함수의 사용법과 유사합니다. 

void main(void)
{
	FILE *fp;
	int i;
	
	fp = fopen("c:\\temp\\file.txt", "r");
	
	if(fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fscanf(fp, "%d", &i);
		// 정수형 값을 읽습니다. fscanf() 함수는 scanf() 함수와 사용 방법이 같기 때문에 scanf() 함수처럼 사용하면 됩니다. 
		printf("i = %d \n", i);
		fclose(fp);
	}
} 
