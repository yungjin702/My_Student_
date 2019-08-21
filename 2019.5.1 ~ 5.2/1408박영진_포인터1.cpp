#include <stdio.h>

int main()
{
	int i = 10 , j = 20;
	
	printf("j의 값 = %d \ni의 값 = %d" , i , j);
	
	printf("i의 포인터 주소 = %d\n" , &i);
	printf("j의 포인터 주소 = %d\n" , &j);
	
	printf("------------------------------\n");
	
	printf("<< i의 주소 연산자 실행 >>\n");
	
	int *ptr;
	ptr = &i;
	
	printf("i의 포인터 ptr의 메모리 주소 = %d\n" , ptr);
	printf("i의 ptr의 값 = %d\n" , &ptr);
	printf("i의 ptr의 참조값 = %d\n" , *ptr); 
	
	printf("<< j의 주소 연산자 실행 >>\n");
	
	ptr = &j;
	
	printf("j의 포인터 ptr의 메모리 주소 = %d\n" , ptr);
	printf("j의 ptr의 값 = %d\n" , &ptr);
	printf("j의 ptr의 참조값 = %d\n" , *ptr);
	
	printf("<< i= *ptr 실행 >>\n");
	
	i = *ptr;
	
	printf("i의 값 = %d" , i);
	
	return 0;
}
