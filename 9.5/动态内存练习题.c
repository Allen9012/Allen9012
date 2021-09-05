#define _CRT_SECURE_NO_WARNINGS 1
//sprintf
//sscanf
#include<stdio.h>

//1 2 3 4 5 1 2 3 4
// 
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//1 2 3 4 5 6 1 2 3 4
//
//void find(int arr[], int sz)
//{
//	int i = 0, pos = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("%d %d\n", num1, num2);
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,1,2,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int x = 0;
//	int y = 0;*/
//	find(arr,sz);
//	return 0;
//}



//void Find(int arr[], int sz, int *px, int* py)
//{
//	//1. 要把所有数字异或
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. 计算ret的哪一位为1
//	//ret = 3
//	//011
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//把从低位向高的第pos位为1，为0的放在另外一个组。
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	*px = num1;
//	*py = num2;
//}
//
//int main()
//{
//	//1 3 5 1 3
//	//2 2 4 4 6
//	// 
//	//1 4 1 4 5
//	//2 2 3 3 6
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	//101
//	//110
//	//011 
//	//1^2^3^4^5^6^1^2^3^4 = 5^6 = 3 != 0  
//	//
//	//1 3 1 3 5
//	//2 4 2 4 6
//	//1. 分组
//	//2. 分组的要点：5和6必须在不同的组
//	//
//	//找出这两个只出现一次的数字
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	//传进去x,y的地址
//	//返回型参数
//	Find(arr, sz, &x, &y);
//	
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//
//int main()
//{
//    long num = 0;
//    FILE* fp = NULL;
//    if ((fp = fopen("fname.dat", "r")) == NULL)
//    {
//        printf("Can’t open the file! ");
//        exit(0);
//    }
//    while (fgetc(fp) != EOF)
//    {
//        num++;
//    }
//    printf("num=%d\n", num);
//    fclose(fp);
//    return 0;
//}

 #define INT_PTR int*
typedef int* int_ptr;
INT_PTR a, b;
int_ptr c, d;

int main()
{

	return 0;
}






