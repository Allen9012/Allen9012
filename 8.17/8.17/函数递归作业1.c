#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//T1

//void reverse(char* str)//��ȻҪ��ָ�룬��ֵ�ĸ�ֵû�ð�
//{
//	assert(str);//0�򱨴�
//	int len= strlen(str);
//	int i = 0;
//	char *left = str;
//	char *right = str+len-1;
//	while (left<right)
//	{
//
//		char tmp=*left ;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef->fedcba  scanf���ո��ͣ�������
//	gets(arr);//��ȡһ��
//	reverse(arr);//�ַ�������sz��strlen�Ϳ�����
//	printf("%s", arr);
//	return 0;
//}
//

//T1����

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef ---> fedcba
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);//
//	return 0;
//}

//T2

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//T3


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1. ����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;//��ð�i������
//		int sum = 0;
//		while (tmp /= 10)//����0�Զ���ȥ
//		{
//			n++;
//		}
//		//2. ����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//���ص���double
//			tmp /= 10;
//		}
//		//3. �Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//T4

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//T5


//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	                           { 9802, "wang", 19 },
//							   { 9803, "zhao", 18 }
//							 };
//	fun(students + 1);
//	return 0;
//}

//T6

//
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//0.5
//20/0.5 = 40-1 = 39
//
//int  main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;//�����㷨
//
//	//total = money;
//	//empty = money;
//	////����������ˮ
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total = %d\n", total);
//
//	return 0;
//}

//T7

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	//�Լ�д��
//	while (left < right)
//	{
//		if ((arr[left] % 2) != 0)
//		{
//			left++;
//		}
//		else
//		{
//			if ((arr[right] % 2) != 0)
//			{
//				tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//			}
//			else
//				right--;
//		}
//	}
////����
//	while (left<right)
//			{
//				//�������ż��
//				while ((left<right) && (arr[left] % 2 == 1))
//				{
//					left++;
//				}
//				//���ұ�������
//				while ((left<right) && (arr[right] % 2 == 0))
//				{
//					right--;
//				}
//				if (left < right)
//				{
//					int tmp = arr[left];
//					arr[left] = arr[right];
//					arr[right] = tmp;
//				}
//			}
//		
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 2,4,6,8,10, 3,  5,  7,  9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}
