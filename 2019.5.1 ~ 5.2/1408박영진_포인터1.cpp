#include <stdio.h>

int main()
{
	int i = 10 , j = 20;
	
	printf("j�� �� = %d \ni�� �� = %d" , i , j);
	
	printf("i�� ������ �ּ� = %d\n" , &i);
	printf("j�� ������ �ּ� = %d\n" , &j);
	
	printf("------------------------------\n");
	
	printf("<< i�� �ּ� ������ ���� >>\n");
	
	int *ptr;
	ptr = &i;
	
	printf("i�� ������ ptr�� �޸� �ּ� = %d\n" , ptr);
	printf("i�� ptr�� �� = %d\n" , &ptr);
	printf("i�� ptr�� ������ = %d\n" , *ptr); 
	
	printf("<< j�� �ּ� ������ ���� >>\n");
	
	ptr = &j;
	
	printf("j�� ������ ptr�� �޸� �ּ� = %d\n" , ptr);
	printf("j�� ptr�� �� = %d\n" , &ptr);
	printf("j�� ptr�� ������ = %d\n" , *ptr);
	
	printf("<< i= *ptr ���� >>\n");
	
	i = *ptr;
	
	printf("i�� �� = %d" , i);
	
	return 0;
}
