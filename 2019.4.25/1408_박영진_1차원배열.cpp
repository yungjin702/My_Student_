#include <stdio.h>

int main()
{
	int arr[10] = {0};
	char arr1[10] = {0};
	float arr2[10] = {0};
	double arr3[10] = {0};
	
	printf("int �� ũ��: %d 10ũ���� int �迭�� ũ�� : %d\n" , sizeof(int), sizeof(arr));
	printf("char �� ũ��: %d 10ũ���� char �迭�� ũ�� : %d\n" , sizeof(char), sizeof(arr1));
	printf("float �� ũ��: %d 10ũ���� float �迭�� ũ�� : %d\n" , sizeof(float), sizeof(arr2));
	printf("double �� ũ��: %d 10ũ���� double �迭�� ũ�� : %d\n" , sizeof(double), sizeof(arr3));
	
	return 0; 
}
