#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////��Ŀ���ƣ�
////�ַ������򣨵ݹ�ʵ�֣�
////��Ŀ���ݣ�
////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////
////ʵ�֣��������ַ����е��ַ��������С�
////
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
////
//#include <string.h>
//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////void reverse_string(char* arr)     //�ݹ鷨
////{
////	char tmp = arr[0];
////	int len = my_strlen(arr);
////	arr[0] = arr[len - 1];
////	arr[len - 1] = '\0';
////	if (my_strlen(arr+1) >=2)
////	reverse_string(arr+1);
////	arr[len - 1] = tmp;
////}
//
//int main()
//{
//	char arr[] = "abcdefg";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
//DigitSum(1729)
//DigitSum(172) + 1729%10
//DigitSum(17) + 172%10 + 1729%10
//DigitSum(1) + 17%10 + ...
//1+7+2+9
//
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//         return num;
//	}
//	 
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n",ret);
//	return 0;
//}
double Pow(int n, int k)
{
	//n^k = n* n^(k-1)
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n*Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);

	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}

