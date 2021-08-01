#define _CRT_SECURE_NO_WARNINGS 1
#define NUM 10
#include<stdio.h>
#include<stdlib.h>
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < NUM; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[],int sz)
{
	int i=0;
	for (i = 0; i < NUM; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[NUM] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//init(arr,sz);
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	printf("\n");
	reverse(arr, sz);
	print(arr, sz);
}