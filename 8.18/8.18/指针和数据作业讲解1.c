#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <assert.h>
#include <stdio.h>
//T1

//int main()
//{
//	 unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;//��������
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100
//	//00101100 - c
//	//00000000000000000000000000101100
//	//
//	//00000000000000000000000011001000
//	//11001000-a
//	//00000000000000000000000001100100
//	//01100100-b
//
//	printf("%d %d", a + b, c);
//	//300 44
//
//	return 0;
//}

//T2
//��32λ���ģʽ�������ϱ���b���ڣ� ��

//int main()//�û�����С�˲ⲻ�˴��
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char *)&a;
//	printf("%d\n", b);
//	return 0;
//}

//T3

//int main()
//{
//	//char����-128 --> 127�����ص�
//	char a[1000] = { 0 };
//	//
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 ... -128 127 126 125 ... 3 2 1 0 -1 -2 ... Ҫ�ǵô洢��ʽ
//	
//	printf("%d\n", strlen(a));//255
//
//	return 0;
//}
//


//T4

//int  main()
//{
//	int i = 0, j = 0,k=0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j==0)
//			arr[i][j]=1;
//			if (i==j)
//			arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//			
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (k = 0; k < 1 - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++)//ֻ��Ӧ������
//		{
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// ................

//T5

//��7�⣨����⣩
//��Ŀ���ƣ�
//������
//��Ŀ���ݣ�
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�//0
//B˵����C��   //0
//C˵����D��   //0
//D˵��C�ں�˵ //1
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭������

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//
//	return 0;
//}
//
//
//�ҹ�����ʱ��ῼ
//
//�������⣺��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ������
//�������ٱ������Σ�
//
//�������⣺��25ƥ��5���ܵ���û�м�ʱ����������ȷ����25ƥ���е�ǰ������
//�������ٱ������Σ�
//...
//
//��������
//��һ�����㣬���ʲ�����,����ÿһ���������㣬ȼ����ǡ����1��Сʱ
//����2���㣬����ȷ��һ��15���ӵ�ʱ���
//
//˼ά��-������
//

//T6

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) && 
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//
//
//int main()
//{
//	//����ռ�
//	int *p = (int*)malloc(10*sizeof(int));
//	//ʹ�ÿռ�
//	//****
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//

//	T7

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//
//int* fun(int a, int b);//��������
//int(*) fun(int a, int b);//err
//int(*fun)(int a, int b);//����ָ��
//(int *)fun(int a, int n);//��������




//A.int(*    (*F)(int, int)    )(int)
//B.int(*F)(int, int)
//C.int(*(*F)(int, int))
//D.*(*F)(int, int)(int)

//(int * p[10])(int*)
//int[10] * p(int *)
//int(*(*p)[10])(int *)
//int((int *)[10])*p




