#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int count_bit_one(unsigned int n,int count)
//{
//	while (n)//mod10 /10能达到
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//	/*	n / 2;*/   //n不能放在这个里面
//		n = n / 2;
//	}
//	return count;
//}
//int count_bit_one(int n)//高级做法 按位于1
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
int count_bit_one(int n)//高级做法二
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
//int main()
//{
//	int count = 0,input=0;
//	scanf("%d", &input);
//	//写一个函数求a的二进制表示补码有几个1
//	count=count_bit_one(input,count);
//	printf("count=%d\n", count);
//	//system("pause");
//	return 0;
//}
int get_diff_bit(int m, int n)
{
	int tmp = m^n;
	int count = 0;
	return count_bit_one(tmp);
	/*while (tmp)
			{
				tmp = tmp&(tmp - 1);
				count++;
			}*/
			return count;
}
int main()
{
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count =%d",count);
	return 0;
}