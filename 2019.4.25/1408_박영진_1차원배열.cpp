#include <stdio.h>

int main()
{
	int arr[10] = {0};
	char arr1[10] = {0};
	float arr2[10] = {0};
	double arr3[10] = {0};
	
	printf("int 의 크기: %d 10크기의 int 배열의 크기 : %d\n" , sizeof(int), sizeof(arr));
	printf("char 의 크기: %d 10크기의 char 배열의 크기 : %d\n" , sizeof(char), sizeof(arr1));
	printf("float 의 크기: %d 10크기의 float 배열의 크기 : %d\n" , sizeof(float), sizeof(arr2));
	printf("double 의 크기: %d 10크기의 double 배열의 크기 : %d\n" , sizeof(double), sizeof(arr3));
	
	return 0; 
}
